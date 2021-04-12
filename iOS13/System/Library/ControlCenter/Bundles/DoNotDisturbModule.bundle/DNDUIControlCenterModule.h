/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/DoNotDisturbModule.bundle/DoNotDisturbModule
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModule.h>
#import <libobjc.A.dylib/DNDLifetimeDetailsProviderDelegate.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/DNDModeAssertionUpdateListener.h>

@class CCUIContentModuleContext, DNDStateService, DNDModeAssertionService, DNDState, DNDLifetimeDetailsProvider, NSArray, DNDLifetimeDetails, DNDModeAssertion, NSString;

@interface DNDUIControlCenterModule : CCUIMenuModuleViewController <CCUIContentModule, DNDLifetimeDetailsProviderDelegate, DNDStateUpdateListener, DNDModeAssertionUpdateListener> {

	CCUIContentModuleContext* _contentModuleContext;
	BOOL _selectedOnExpansion;
	DNDStateService* _stateService;
	DNDModeAssertionService* _assertionService;
	DNDState* _currentState;
	DNDLifetimeDetailsProvider* _lifetimeDetailsProvider;
	NSArray* _availableLifetimeDetails;
	DNDLifetimeDetails* _currentAssertionLifetimeDetails;
	DNDModeAssertion* _currentAssertion;

}

@property (nonatomic,retain) DNDModeAssertion * currentAssertion;                                                                  //@synthesize currentAssertion=_currentAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
+(void)initialize;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)_refreshState;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)modeAssertionService:(id)arg1 didUpdateActiveModeAssertion:(id)arg2 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(void)lifetimeDetailsProvider:(id)arg1 didUpdateAvailableLifetimeDetails:(id)arg2 ;
-(void)_observeSystemNotifications;
-(void)_unobserveSystemNotifications;
-(void)_updateForDarkerSystemColorsChange;
-(void)setCurrentAssertion:(DNDModeAssertion *)arg1 ;
-(void)_updateDoNotDisturbMenuItemsIfExpanded;
-(void)_updateDoNotDisturbMenuItems;
-(id)_menuItemForLifeTimeDetails:(id)arg1 ;
-(void)_configureGlyphPackageDescription;
-(void)_toggleStateForActive:(BOOL)arg1 ;
-(void)_refreshStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(DNDModeAssertion *)currentAssertion;
@end

