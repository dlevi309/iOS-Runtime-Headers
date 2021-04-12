/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
*/

#import <libobjc.A.dylib/AXCCTextSizeModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, AXCCTextSizeModuleViewController, NSString;

@interface AXCCTextSizeModule : NSObject <AXCCTextSizeModuleViewControllerDelegate, CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	AXCCTextSizeModuleViewController* _contentViewController;

}

@property (nonatomic,retain) AXCCTextSizeModuleViewController * contentViewController;                                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentViewController:(AXCCTextSizeModuleViewController *)arg1 ;
-(AXCCTextSizeModuleViewController *)contentViewController;
-(void)expandModule;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(id)backgroundViewControllerForContext:(id)arg1 ;
@end

