<?php
/**
 * @file
 * pushtape_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushtape_video_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function pushtape_video_mediafront_default_presets() {
  $items = array(
    'video_playlist' => array(
      'name' => 'video_playlist',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => '0',
        ),
        'isplaylist' => array(
          0 => '0',
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => '80',
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => '20',
        'showPlaylist' => 1,
        'vertical' => '1',
        'node' => array(),
        'playlist' => '',
        'pageLimit' => '10',
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '',
        'swfplayer' => '/profiles/pushtape/modules/contrib/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => '',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'volumeVertical' => 0,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'absolution',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-control-settings',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function pushtape_video_mediafront_views_default_options() {
  $options = array(
    'pushtape_video' => array(
      'field_video' => array(
        'link_to_player' => 0,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'title' => array(
        'link_to_player' => 0,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'mediafront_player' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_video_fid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'filename' => array(
        'link_to_player' => 0,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'type' => array(
        'link_to_player' => 1,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'nid' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'field_featured_status_value' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
      'random' => array(
        'link_to_player' => 0,
        'field_type' => '0',
        'media_type' => 'media',
        'preview' => '0',
        'thumbnail' => '0',
        'custom' => '',
      ),
    ),
  );
  return $options;
}

/**
 * Implements hook_node_info().
 */
function pushtape_video_node_info() {
  $items = array(
    'pushtape_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Add a video or video playlist'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
