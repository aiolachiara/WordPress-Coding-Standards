<!-- Annotation has to be on the second line as errors are thrown on line 1 and errors on annotation lines are ignored. -->
phpcs:set WordPress.Files.FileName custom_test_classes[] Some\Name\TestSample
<?php

class TestCase extends \Some\Name\TestSample {}
/* phpcs:set WordPress.Files.FileName custom_test_classes[] */