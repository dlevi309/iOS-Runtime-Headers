/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBVolumeHUDViewControllerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>

@protocol OS_dispatch_queue;
@class SBHUDController, SBVolumeHUDSettings, SBRingerControl, SBTelephonyManager, SBConferenceManager, NSMutableArray, NSMutableSet, NSString, NSObject, SBAVSystemControllerCache, NSArray;

@interface SBVolumeControl : NSObject <SBVolumeHUDViewControllerDelegate, PTSettingsKeyObserver, SBAVSystemControllerCacheObserver> {

	SBHUDController* _hudController;
	SBVolumeHUDSettings* _volumeHUDSettings;
	SBRingerControl* _ringerControl;
	SBTelephonyManager* _telephonyManager;
	SBConferenceManager* _conferenceManager;
	BOOL _debounce;
	unsigned long long _mode;
	NSMutableArray* _activeAudioRoutes;
	NSMutableSet* _alwaysHiddenCategories;
	NSString* _lastEventCategory;
	BOOL _hudHandledLastVolumeChange;
	BOOL _euDevice;
	BOOL _userAcknowledgedEUVolumeLimit;
	BOOL _lastVolumeChangedWasBlocked;
	BOOL _volumeDownButtonIsDown;
	BOOL _volumeUpButtonIsDown;
	BOOL _controlCenterIsPresented;
	int _anyCallActive;
	os_unfair_lock_s _effectiveVolumeLock;
	float _effectiveVolume;
	os_unfair_lock_s _volumeLimitLock;
	float _volumeLimit;
	os_unfair_lock_s _volumeLimitEnforcedLock;
	BOOL _volumeLimitEnforced;
	NSObject*<OS_dispatch_queue> _avSystemControllerQueue;
	SBAVSystemControllerCache* _avCache;
	NSString* _lastDisplayedCategory;

}

@property (nonatomic,readonly) NSString * lastDisplayedCategory;              //@synthesize lastDisplayedCategory=_lastDisplayedCategory - In the implementation block
@property (nonatomic,readonly) NSArray * activeAudioRouteTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)_isVolumeChangeAllowedForState:(id)arg1 error:(out id*)arg2 ;
-(float)_effectiveVolume;
-(void)_sendEUVolumeLimitAcknowledgementIfNecessary;
-(void)_dispatchAVSystemControllerSync:(/*^block*/id)arg1 ;
-(BOOL)_HUDIsDisplayableForCategory:(id)arg1 ;
-(void)_controlCenterWillPresent:(id)arg1 ;
-(id)initWithHUDController:(id)arg1 ringerControl:(id)arg2 telephonyManager:(id)arg3 conferenceManager:(id)arg4 ;
-(float)euVolumeLimit;
-(float)volumeStepDown;
-(BOOL)_shouldRouteChangeResultInPresentingVolumeHUDWhenTransitioningFrom:(id)arg1 toAudioRoutes:(id)arg2 ;
-(long long)_audioRouteTypeForTelephonyDeviceType:(long long)arg1 ;
-(void)_serverConnectionDied:(id)arg1 ;
-(void)volumeHUDViewControllerRequestsDismissal:(id)arg1 ;
-(void)_updateVolumeLimitEnforced:(BOOL)arg1 ;
-(void)addAlwaysHiddenCategory:(id)arg1 ;
-(void)cache:(id)arg1 didUpdateVolumeLimit:(float)arg2 ;
-(NSArray *)activeAudioRouteTypes;
-(void)_setMediaVolumeForIAP:(float)arg1 ;
-(BOOL)isEUVolumeLimitEnabled;
-(void)toggleMute;
-(void)_userAcknowledgedEUEnforcement:(float)arg1 ;
-(BOOL)_HUDIsDisplayableInCurrentSpringBoardContext;
-(id)_audioRouteTypesForClusteredOutputDevices:(id)arg1 ;
-(float)_calcButtonRepeatDelay;
-(void)_updateAudioRoutesIfNecessary:(BOOL)arg1 forRoute:(id)arg2 withAttributes:(id)arg3 andOutputDevices:(id)arg4 ;
-(float)_getMediaVolumeForIAP;
-(void)_dispatchAVSystemControllerAsync:(/*^block*/id)arg1 ;
-(BOOL)_isVolumeHUDVisibleOrFading;
-(id)presentedVolumeHUDViewController;
-(BOOL)isEUVolumeLimitEnforced;
-(BOOL)wouldShowAtLeastAYellowWarningForVolume:(float)arg1 ;
-(BOOL)_isVolumeHUDVisible;
-(void)_controlCenterDidDismiss:(id)arg1 ;
-(long long)_audioRouteTypeForOutputDevice:(id)arg1 ;
-(BOOL)_HUDIsDisplayableForLastEventCategory;
-(NSString *)lastDisplayedCategory;
-(long long)_audioRouteTypeForActiveAudioRoute:(id)arg1 withAttributes:(id)arg2 ;
-(void)_resetMediaServerConnection;
-(BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg1 ;
-(void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(BOOL)arg2 ;
-(void)_presentVolumeHUDWithVolume:(float)arg1 ;
-(id)existingVolumeHUDViewController;
-(void)changeVolumeByDelta:(float)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_effectiveVolumeChanged:(id)arg1 ;
-(void)setVolume:(float)arg1 forCategory:(id)arg2 ;
-(void)_updateEUVolumeSettings;
-(void)_presentVolumeHUDIfDisplayable:(BOOL)arg1 orRefreshIfPresentedWithReason:(id)arg2 ;
-(BOOL)_outputDevicesRepresentWirelessSplitterGroup:(id)arg1 ;
-(void)cancelVolumeEvent;
-(void)_updateEffectiveVolume:(float)arg1 ;
-(void)clearAlwaysHiddenCategories;
-(BOOL)_isCategoryAlwaysHidden:(id)arg1 ;
-(float)volumeStepUp;
-(void)removeAlwaysHiddenCategory:(id)arg1 ;
-(id)_configureVolumeHUDViewControllerWithVolume:(float)arg1 ;
-(BOOL)_isHUDDisplayable;
-(BOOL)isEUDevice;
-(void)setActiveCategoryVolume:(float)arg1 ;
-(BOOL)userHasAcknowledgedEUVolumeLimit;
-(void)hideVolumeHUDIfVisible;
-(void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4 ;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)increaseVolume;
-(id)avSystemControllerDispatchQueue;
-(float)_volumeStepUp:(BOOL)arg1 ;
-(BOOL)isEUVolumeLimitSet;
-(void)decreaseVolume;
-(id)acquireVolumeHUDHiddenAssertionForReason:(id)arg1 ;
-(void)_updateVolumeLimit:(float)arg1 ;
@end

