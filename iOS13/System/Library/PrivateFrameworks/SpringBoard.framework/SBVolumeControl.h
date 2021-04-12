/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBVolumeHUDViewControllerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>

@protocol OS_dispatch_queue;
@class SBHUDController, SBVolumeHUDSettings, SBRingerControl, NSMutableArray, NSMutableSet, NSString, NSObject, SBAVSystemControllerCache, NSArray;

@interface SBVolumeControl : NSObject <SBVolumeHUDViewControllerDelegate, PTSettingsKeyObserver, SBAVSystemControllerCacheObserver> {

	SBHUDController* _hudController;
	SBVolumeHUDSettings* _volumeHUDSettings;
	SBRingerControl* _ringerControl;
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
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)cancelVolumeEvent;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)setActiveCategoryVolume:(float)arg1 ;
-(BOOL)isEUVolumeLimitEnabled;
-(void)toggleMute;
-(float)euVolumeLimit;
-(BOOL)isEUDevice;
-(BOOL)isEUVolumeLimitEnforced;
-(void)_serverConnectionDied:(id)arg1 ;
-(void)_effectiveVolumeChanged:(id)arg1 ;
-(void)_presentVolumeHUDWithVolume:(float)arg1 ;
-(void)removeAlwaysHiddenCategory:(id)arg1 ;
-(void)addAlwaysHiddenCategory:(id)arg1 ;
-(void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4 ;
-(void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(BOOL)arg2 ;
-(id)initWithHUDController:(id)arg1 ringerControl:(id)arg2 ;
-(void)_resetMediaServerConnection;
-(void)_updateEUVolumeSettings;
-(void)_controlCenterWillPresent:(id)arg1 ;
-(void)_controlCenterDidDismiss:(id)arg1 ;
-(float)_volumeStepUp:(BOOL)arg1 ;
-(float)volumeStepUp;
-(BOOL)isEUVolumeLimitSet;
-(void)_dispatchAVSystemControllerAsync:(/*^block*/id)arg1 ;
-(float)_calcButtonRepeatDelay;
-(void)changeVolumeByDelta:(float)arg1 ;
-(float)volumeStepDown;
-(id)presentedVolumeHUDViewController;
-(void)_sendEUVolumeLimitAcknowledgementIfNecessary;
-(BOOL)_HUDIsDisplayableForLastEventCategory;
-(BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg1 ;
-(void)_updateAudioRoutesIfNecessary:(BOOL)arg1 forRoute:(id)arg2 withAttributes:(id)arg3 andOutputDevices:(id)arg4 ;
-(void)_userAcknowledgedEUEnforcement:(float)arg1 ;
-(void)_dispatchAVSystemControllerSync:(/*^block*/id)arg1 ;
-(BOOL)_isVolumeHUDVisibleOrFading;
-(BOOL)_HUDIsDisplayableForCategory:(id)arg1 ;
-(BOOL)_HUDIsDisplayableInCurrentSpringBoardContext;
-(BOOL)_isCategoryAlwaysHidden:(id)arg1 ;
-(BOOL)wouldShowAtLeastAYellowWarningForVolume:(float)arg1 ;
-(BOOL)_isHUDDisplayable;
-(BOOL)_isVolumeHUDVisible;
-(id)_configureVolumeHUDViewControllerWithVolume:(float)arg1 ;
-(BOOL)_outputDevicesRepresentWirelessSplitterGroup:(id)arg1 ;
-(long long)_audioRouteTypeForOutputDevice:(id)arg1 ;
-(long long)_audioRouteTypeForActiveAudioRoute:(id)arg1 withAttributes:(id)arg2 ;
-(long long)_audioRouteTypeForTelephonyDeviceType:(long long)arg1 ;
-(void)_updateEffectiveVolume:(float)arg1 ;
-(id)avSystemControllerDispatchQueue;
-(id)existingVolumeHUDViewController;
-(BOOL)_shouldRouteChangeResultInPresentingVolumeHUDWhenTransitioningFrom:(id)arg1 toAudioRoutes:(id)arg2 ;
-(void)_presentVolumeHUDIfDisplayableOrRefreshIfPresented:(id)arg1 ;
-(void)volumeHUDViewControllerRequestsDismissal:(id)arg1 ;
-(void)setVolume:(float)arg1 forCategory:(id)arg2 ;
-(NSArray *)activeAudioRouteTypes;
-(void)clearAlwaysHiddenCategories;
-(void)hideVolumeHUDIfVisible;
-(id)acquireVolumeHUDHiddenAssertionForReason:(id)arg1 ;
-(BOOL)userHasAcknowledgedEUVolumeLimit;
-(void)_setMediaVolumeForIAP:(float)arg1 ;
-(float)_getMediaVolumeForIAP;
-(NSString *)lastDisplayedCategory;
@end

