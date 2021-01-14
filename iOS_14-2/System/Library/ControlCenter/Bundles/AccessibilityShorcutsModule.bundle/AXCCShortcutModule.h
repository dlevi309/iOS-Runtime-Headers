/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityShorcutsModule.bundle/AccessibilityShorcutsModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>
#import <libobjc.A.dylib/AXCCShortcutModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class AXCCShortcutModuleViewController, CCUIContentModuleContext, NSString;

@interface AXCCShortcutModule : CCUIToggleModule <AXCCShortcutModuleViewControllerDelegate, CCUIContentModule> {

	AXCCShortcutModuleViewController* _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) AXCCShortcutModuleViewController * contentViewController;                                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)glyphState;
-(BOOL)isSelected;
-(void)setContentViewController:(AXCCShortcutModuleViewController *)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(AXCCShortcutModuleViewController *)contentViewController;
-(void)expandModule;
-(void)optionToggled;
-(void)openAccessibilityShortcutSettings;
@end

