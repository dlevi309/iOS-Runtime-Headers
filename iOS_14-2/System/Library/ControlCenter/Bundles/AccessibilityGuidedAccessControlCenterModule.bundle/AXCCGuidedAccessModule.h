/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityGuidedAccessControlCenterModule.bundle/AccessibilityGuidedAccessControlCenterModule
*/

#import <libobjc.A.dylib/AXCCGuidedAccessModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, AXCCGuidedAccessModuleViewController, NSString;

@interface AXCCGuidedAccessModule : NSObject <AXCCGuidedAccessModuleViewControllerDelegate, CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	AXCCGuidedAccessModuleViewController* _contentViewController;

}

@property (nonatomic,retain) AXCCGuidedAccessModuleViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setContentViewController:(AXCCGuidedAccessModuleViewController *)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(AXCCGuidedAccessModuleViewController *)contentViewController;
-(void)openGuidedAccessSettings;
@end

