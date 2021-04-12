/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>
#import <libobjc.A.dylib/CCUIDisplayModuleViewControllerDelegate.h>

@class CCUIContentModuleContext, CCUIDisplayModuleViewController, CCUIDisplayBackgroundViewController, NSString;

@interface CCUIDisplayModule : NSObject <CCUIContentModule, CCUIDisplayModuleViewControllerDelegate> {

	CCUIContentModuleContext* _contentModuleContext;
	CCUIDisplayModuleViewController* _moduleViewController;
	CCUIDisplayBackgroundViewController* _backgroundViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)contentViewControllerForContext:(id)arg1 ;
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(id)_brightnessGlyphPackageDescription;
-(id)_brightnessGlyphStateForBrightnessLevel:(double)arg1 ;
-(void)displayModuleViewController:(id)arg1 brightnessDidChange:(float)arg2 ;
@end

