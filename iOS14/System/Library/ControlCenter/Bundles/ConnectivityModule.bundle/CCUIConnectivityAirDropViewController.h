/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryAlertControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class SFAirDropDiscoveryController, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityAirDropViewController : CCUIConnectivityButtonViewController <SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, MCProfileConnectionObserver, CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	SFAirDropDiscoveryController* _airDropDiscoveryController;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)buttonTapped:(id)arg1 ;
-(id)_newAirDropMenuViewController;
-(id)init;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(void)_updateState;
-(void)startObservingStateChanges;
-(BOOL)_isAirDropRestricted;
-(void)stopObservingStateChanges;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isEduModeEnabled;
-(void)_updateAirDropControlAsEnabled:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(id)displayName;
@end

