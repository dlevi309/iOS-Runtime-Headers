/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentViewController:(AXCCGuidedAccessModuleViewController *)arg1 ;
-(AXCCGuidedAccessModuleViewController *)contentViewController;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)openGuidedAccessSettings;
@end

