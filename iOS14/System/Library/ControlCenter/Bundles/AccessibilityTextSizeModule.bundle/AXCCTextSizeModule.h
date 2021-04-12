/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundViewControllerForContext:(id)arg1 ;
-(id)init;
-(void)setContentViewController:(AXCCTextSizeModuleViewController *)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(AXCCTextSizeModuleViewController *)contentViewController;
-(void)expandModule;
@end

