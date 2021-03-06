<?php
/**
 * @file
 * ace_ct_project.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ace_ct_project_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8cf6ceb6-56fd-4ffa-bca2-72f2b5853eeb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52e84410-048f-4153-9396-e686e40262cb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52e84410-048f-4153-9396-e686e40262cb';
    $display->content['new-52e84410-048f-4153-9396-e686e40262cb'] = $pane;
    $display->panels['center'][0] = 'new-52e84410-048f-4153-9396-e686e40262cb';
    $pane = new stdClass();
    $pane->pid = 'new-89a18957-272e-4d91-8062-b7029c9d6916';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '89a18957-272e-4d91-8062-b7029c9d6916';
    $display->content['new-89a18957-272e-4d91-8062-b7029c9d6916'] = $pane;
    $display->panels['center'][1] = 'new-89a18957-272e-4d91-8062-b7029c9d6916';
    $pane = new stdClass();
    $pane->pid = 'new-9a90c727-ba08-4607-a50c-d58a17dfeb28';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9a90c727-ba08-4607-a50c-d58a17dfeb28';
    $display->content['new-9a90c727-ba08-4607-a50c-d58a17dfeb28'] = $pane;
    $display->panels['center'][2] = 'new-9a90c727-ba08-4607-a50c-d58a17dfeb28';
    $pane = new stdClass();
    $pane->pid = 'new-ff8a742c-64f3-4978-a71a-5edd43fa805d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ff8a742c-64f3-4978-a71a-5edd43fa805d';
    $display->content['new-ff8a742c-64f3-4978-a71a-5edd43fa805d'] = $pane;
    $display->panels['center'][3] = 'new-ff8a742c-64f3-4978-a71a-5edd43fa805d';
    $pane = new stdClass();
    $pane->pid = 'new-33f5d233-7a43-4254-9686-2e0ee6a340cf';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '33f5d233-7a43-4254-9686-2e0ee6a340cf';
    $display->content['new-33f5d233-7a43-4254-9686-2e0ee6a340cf'] = $pane;
    $display->panels['center'][4] = 'new-33f5d233-7a43-4254-9686-2e0ee6a340cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-52e84410-048f-4153-9396-e686e40262cb';
  $panelizer->display = $display;
  $export['node:project:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8136f565-3fc8-4373-84a8-96af76a0285c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4d24cb71-a221-42ce-9281-3a6d2c8757fb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d24cb71-a221-42ce-9281-3a6d2c8757fb';
    $display->content['new-4d24cb71-a221-42ce-9281-3a6d2c8757fb'] = $pane;
    $display->panels['center'][0] = 'new-4d24cb71-a221-42ce-9281-3a6d2c8757fb';
    $pane = new stdClass();
    $pane->pid = 'new-09f7f40a-b7a4-4437-b3d0-2dbfcb14a506';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09f7f40a-b7a4-4437-b3d0-2dbfcb14a506';
    $display->content['new-09f7f40a-b7a4-4437-b3d0-2dbfcb14a506'] = $pane;
    $display->panels['center'][1] = 'new-09f7f40a-b7a4-4437-b3d0-2dbfcb14a506';
    $pane = new stdClass();
    $pane->pid = 'new-7254e796-bf7a-4abe-9cef-b192c9cea751';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7254e796-bf7a-4abe-9cef-b192c9cea751';
    $display->content['new-7254e796-bf7a-4abe-9cef-b192c9cea751'] = $pane;
    $display->panels['center'][2] = 'new-7254e796-bf7a-4abe-9cef-b192c9cea751';
    $pane = new stdClass();
    $pane->pid = 'new-1ad79950-ee4e-4659-a95c-449ce9015c84';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ad79950-ee4e-4659-a95c-449ce9015c84';
    $display->content['new-1ad79950-ee4e-4659-a95c-449ce9015c84'] = $pane;
    $display->panels['center'][3] = 'new-1ad79950-ee4e-4659-a95c-449ce9015c84';
    $pane = new stdClass();
    $pane->pid = 'new-3856e7cc-7eb8-4884-a32a-8e07d4ac2e95';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3856e7cc-7eb8-4884-a32a-8e07d4ac2e95';
    $display->content['new-3856e7cc-7eb8-4884-a32a-8e07d4ac2e95'] = $pane;
    $display->panels['center'][4] = 'new-3856e7cc-7eb8-4884-a32a-8e07d4ac2e95';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3856e7cc-7eb8-4884-a32a-8e07d4ac2e95';
  $panelizer->display = $display;
  $export['node:project:default:default'] = $panelizer;

  return $export;
}
