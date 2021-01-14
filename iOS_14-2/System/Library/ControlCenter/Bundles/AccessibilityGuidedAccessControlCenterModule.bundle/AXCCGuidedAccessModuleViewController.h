/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityGuidedAccessControlCenterModule.bundle/AccessibilityGuidedAccessControlCenterModule
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol AXCCGuidedAccessModuleViewControllerDelegate;
@class NSString;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController {

	BOOL _enabled;
	id<AXCCGuidedAccessModuleViewControllerDelegate> _gaxDelegate;
	NSString* _lastFetchedEffectiveApp;

}

@property (nonatomic,copy) NSString * lastFetchedEffectiveApp;                                                 //@synthesize lastFetchedEffectiveApp=_lastFetchedEffectiveApp - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;              //@synthesize gaxDelegate=_gaxDelegate - In the implementation block
-(BOOL)enabled;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateEnabledState;
-(BOOL)_isDeviceUnlocked;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setGaxDelegate:(id<AXCCGuidedAccessModuleViewControllerDelegate>)arg1 ;
-(void)setLastFetchedEffectiveApp:(NSString *)arg1 ;
-(NSString *)lastFetchedEffectiveApp;
-(BOOL)_guidedAccessAvailable;
-(id<AXCCGuidedAccessModuleViewControllerDelegate>)gaxDelegate;
-(id)_accessibilityControlCenterButtonLabel;
-(id)_accessibilityControlCenterButtonIdentifier;
@end

