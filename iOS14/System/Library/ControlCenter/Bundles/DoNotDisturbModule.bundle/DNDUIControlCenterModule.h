/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/DoNotDisturbModule.bundle/DoNotDisturbModule
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModule.h>
#import <libobjc.A.dylib/DNDLifetimeDetailsProviderDelegate.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/DNDModeAssertionUpdateListener.h>

@class CCUIContentModuleContext, DNDStateService, DNDModeAssertionService, DNDToggleManager, DNDState, DNDLifetimeDetailsProvider, NSArray, DNDLifetimeDetails, DNDModeAssertion, NSString;

@interface DNDUIControlCenterModule : CCUIMenuModuleViewController <CCUIContentModule, DNDLifetimeDetailsProviderDelegate, DNDStateUpdateListener, DNDModeAssertionUpdateListener> {

	CCUIContentModuleContext* _contentModuleContext;
	BOOL _selectedOnExpansion;
	DNDStateService* _stateService;
	DNDModeAssertionService* _assertionService;
	DNDToggleManager* _toggleManager;
	DNDState* _currentState;
	DNDLifetimeDetailsProvider* _lifetimeDetailsProvider;
	NSArray* _availableLifetimeDetails;
	DNDLifetimeDetails* _currentAssertionLifetimeDetails;
	DNDModeAssertion* _currentAssertion;

}

@property (nonatomic,retain) DNDModeAssertion * currentAssertion;                                                                  //@synthesize currentAssertion=_currentAssertion - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_observeSystemNotifications;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_updateForDarkerSystemColorsChange;
-(void)_updateDoNotDisturbMenuItems;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_configureGlyphPackageDescription;
-(void)lifetimeDetailsProvider:(id)arg1 didUpdateAvailableLifetimeDetails:(id)arg2 ;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_refreshState;
-(id)_statusTextForState:(id)arg1 ;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(DNDModeAssertion *)currentAssertion;
-(BOOL)_canShowWhileLocked;
-(void)_unobserveSystemNotifications;
-(void)viewDidLoad;
-(void)modeAssertionService:(id)arg1 didUpdateActiveModeAssertion:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_refreshStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(id)_menuItemForLifeTimeDetails:(id)arg1 ;
-(void)_updateDoNotDisturbMenuItemsIfExpanded;
-(void)setCurrentAssertion:(DNDModeAssertion *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

