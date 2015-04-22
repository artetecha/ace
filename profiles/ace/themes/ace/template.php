<?php

/**
 * @file
 * template.php
 */

/**
 * Adding img-responsive class to all images. What this does is makes sure that your image does not go beyond it's container.
 */
function ace_preprocess_image_style(&$vars) {
        $vars['attributes']['class'][] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
}
