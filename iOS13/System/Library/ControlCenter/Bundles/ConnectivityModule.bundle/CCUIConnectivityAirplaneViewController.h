/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate> {

	BOOL _airplaneModeEnabled;
	RadiosPreferences* _airplaneModeController;

}

@property (nonatomic,retain) RadiosPreferences * airplaneModeController;                                                          //@synthesize airplaneModeController=_airplaneModeController - In the implementation block
@property (assign,setter=_setAirplaneModeEnabled:,getter=_isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;              //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)displayName;
-(void)airplaneModeChanged;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(BOOL)_toggleState;
-(BOOL)_isAirplaneModeEnabled;
-(void)_setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(id)_debugDescriptionForState:(BOOL)arg1 ;
-(BOOL)_stateWithEffectiveOverrides;
-(BOOL)_isStateOverridden;
-(RadiosPreferences *)airplaneModeController;
-(void)setAirplaneModeController:(RadiosPreferences *)arg1 ;
@end

