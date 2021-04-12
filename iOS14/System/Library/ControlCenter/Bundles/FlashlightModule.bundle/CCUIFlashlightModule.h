/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIFlashlightModuleViewController, CCUIFlashlightBackgroundViewController, NSString;

@interface CCUIFlashlightModule : NSObject <CCUIContentModule> {

	CCUIFlashlightModuleViewController* _viewController;
	CCUIFlashlightBackgroundViewController* _backgroundViewController;

}

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
@end

