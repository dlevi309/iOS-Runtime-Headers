/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIFlashlightModuleViewController, CCUIFlashlightBackgroundViewController, NSString;

@interface CCUIFlashlightModule : NSObject <CCUIContentModule> {

	CCUIFlashlightModuleViewController* _viewController;
	CCUIFlashlightBackgroundViewController* _backgroundViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(id)contentViewControllerForContext:(id)arg1 ;
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
@end

