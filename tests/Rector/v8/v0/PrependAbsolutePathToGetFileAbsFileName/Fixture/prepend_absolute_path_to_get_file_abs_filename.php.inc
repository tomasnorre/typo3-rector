<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v8\v0\PrependAbsolutePathToGetFileAbsFileName\Fixture;

use TYPO3\CMS\Core\Imaging\GraphicalFunctions;

class SomeFooBar
{
    /**
     * @var GraphicalFunctions
     */
    private $graphicalFunctions;

    /**
     * SomeFooBar constructor.
     *
     * @param GraphicalFunctions $graphicalFunctions
     */
    public function __construct(GraphicalFunctions $graphicalFunctions)
    {
        $this->graphicalFunctions = $graphicalFunctions;
        $this->graphicalFunctions->prependAbsolutePath('some.font');
    }
}

?>
-----
<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v8\v0\PrependAbsolutePathToGetFileAbsFileName\Fixture;

use TYPO3\CMS\Core\Utility\GeneralUtility;
use TYPO3\CMS\Core\Imaging\GraphicalFunctions;

class SomeFooBar
{
    /**
     * @var GraphicalFunctions
     */
    private $graphicalFunctions;

    /**
     * SomeFooBar constructor.
     *
     * @param GraphicalFunctions $graphicalFunctions
     */
    public function __construct(GraphicalFunctions $graphicalFunctions)
    {
        $this->graphicalFunctions = $graphicalFunctions;
        GeneralUtility::getFileAbsFileName('some.font');
    }
}

?>
