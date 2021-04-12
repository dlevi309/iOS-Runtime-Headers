/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)displayModuleViewController:(id)arg1 brightnessDidChange:(float)arg2 ;
-(id)_brightnessGlyphStateForBrightnessLevel:(double)arg1 ;
-(id)_brightnessGlyphPackageDescription;
@end

