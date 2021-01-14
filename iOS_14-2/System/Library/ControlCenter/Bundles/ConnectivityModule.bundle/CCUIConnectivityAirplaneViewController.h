/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class RadiosPreferences, NSObject;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate> {

	BOOL _airplaneModeEnabled;
	RadiosPreferences* _airplaneModeController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RadiosPreferences * airplaneModeController;                                                          //@synthesize airplaneModeController=_airplaneModeController - In the implementation block
@property (assign,setter=_setAirplaneModeEnabled:,getter=_isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;              //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                  //@synthesize queue=_queue - In the implementation block
-(BOOL)_toggleState;
-(void)buttonTapped:(id)arg1 ;
-(id)init;
-(id)_debugDescriptionForState:(BOOL)arg1 ;
-(BOOL)_isAirplaneModeEnabled;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)_updateStateWithEnabled:(BOOL)arg1 ;
-(void)airplaneModeChanged;
-(RadiosPreferences *)airplaneModeController;
-(void)_updateState;
-(void)startObservingStateChanges;
-(BOOL)_stateWithEffectiveOverrides;
-(void)stopObservingStateChanges;
-(BOOL)_canShowWhileLocked;
-(void)setAirplaneModeController:(RadiosPreferences *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)displayName;
-(BOOL)_isStateOverridden;
-(void)dealloc;
@end

