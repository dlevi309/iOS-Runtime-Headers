/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(BOOL)isSelected;
-(void)setContentViewController:(AXCCShortcutModuleViewController *)arg1 ;
-(AXCCShortcutModuleViewController *)contentViewController;
-(void)expandModule;
-(id)glyphState;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)optionToggled;
-(void)openAccessibilityShortcutSettings;
@end

