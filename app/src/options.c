#include "options.h"

const struct scrcpy_options scrcpy_options_default = {
    .serial = NULL,
    .crop = NULL,
    .record_filename = NULL,
    .window_title = NULL,
    .push_target = NULL,
    .render_driver = NULL,
    .video_codec_options = NULL,
    .video_encoder = NULL,
#ifdef HAVE_V4L2
    .v4l2_device = NULL,
#endif
    .log_level = SC_LOG_LEVEL_INFO,
    .video_codec = SC_CODEC_H264,
    .audio_codec = SC_CODEC_OPUS,
    .record_format = SC_RECORD_FORMAT_AUTO,
    .keyboard_input_mode = SC_KEYBOARD_INPUT_MODE_INJECT,
    .mouse_input_mode = SC_MOUSE_INPUT_MODE_INJECT,
    .port_range = {
        .first = DEFAULT_LOCAL_PORT_RANGE_FIRST,
        .last = DEFAULT_LOCAL_PORT_RANGE_LAST,
    },
    .tunnel_host = 0,
    .tunnel_port = 0,
    .shortcut_mods = {
        .data = {SC_SHORTCUT_MOD_LALT, SC_SHORTCUT_MOD_LSUPER},
        .count = 2,
    },
    .max_size = 0,
    .video_bit_rate = 0,
    .audio_bit_rate = 0,
    .max_fps = 0,
    .lock_video_orientation = SC_LOCK_VIDEO_ORIENTATION_UNLOCKED,
    .rotation = 0,
    .window_x = SC_WINDOW_POSITION_UNDEFINED,
    .window_y = SC_WINDOW_POSITION_UNDEFINED,
    .window_width = 0,
    .window_height = 0,
    .display_id = 0,
    .display_buffer = 0,
    .v4l2_buffer = 0,
#ifdef HAVE_USB
    .otg = false,
#endif
    .show_touches = false,
    .fullscreen = false,
    .always_on_top = false,
    .control = true,
    .display = true,
    .turn_screen_off = false,
    .key_inject_mode = SC_KEY_INJECT_MODE_MIXED,
    .window_borderless = false,
    .mipmaps = true,
    .stay_awake = false,
    .force_adb_forward = false,
    .disable_screensaver = false,
    .forward_key_repeat = true,
    .forward_all_clicks = false,
    .legacy_paste = false,
    .power_off_on_close = false,
    .clipboard_autosync = true,
    .downsize_on_error = true,
    .tcpip = false,
    .tcpip_dst = NULL,
    .select_tcpip = false,
    .select_usb = false,
    .cleanup = true,
    .start_fps_counter = false,
    .power_on = true,
    .audio = true,
};
