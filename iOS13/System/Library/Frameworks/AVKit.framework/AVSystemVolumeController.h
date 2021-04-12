/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVVolumeController.h>

@class NSNumber, NSString, AVSystemController;

@interface AVSystemVolumeController : NSObject <AVVolumeController> {

	BOOL _changingVolume;
	BOOL _currentRouteHasVolumeControl;
	BOOL _EUVolumeLimitEnabled;
	BOOL _EUVolumeLimitOverridden;
	BOOL _volumeChangesThrottled;
	BOOL _canOverrideEUVolumeLimit;
	BOOL _fullyInitialized;
	float _EUVolumeLimit;
	float _volume;
	NSNumber* _targetVolumeInternal;
	NSNumber* _maximumTargetVolumeSinceChangingVolumeBegan;
	NSString* _volumeCategory;
	AVSystemController* _sharedSystemController;

}

@property (assign,getter=isChangingVolume,nonatomic) BOOL changingVolume;                                //@synthesize changingVolume=_changingVolume - In the implementation block
@property (assign,nonatomic) BOOL currentRouteHasVolumeControl;                                          //@synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                        //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (assign,getter=isEUVolumeLimitEnabled,nonatomic) BOOL EUVolumeLimitEnabled;                    //@synthesize EUVolumeLimitEnabled=_EUVolumeLimitEnabled - In the implementation block
@property (assign,getter=isEUVolumeLimitOverridden,nonatomic) BOOL EUVolumeLimitOverridden;              //@synthesize EUVolumeLimitOverridden=_EUVolumeLimitOverridden - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL volumeChangesThrottled;                                                //@synthesize volumeChangesThrottled=_volumeChangesThrottled - In the implementation block
@property (assign,nonatomic) BOOL canOverrideEUVolumeLimit;                                              //@synthesize canOverrideEUVolumeLimit=_canOverrideEUVolumeLimit - In the implementation block
@property (nonatomic,retain) NSNumber * targetVolumeInternal;                                            //@synthesize targetVolumeInternal=_targetVolumeInternal - In the implementation block
@property (nonatomic,retain) NSNumber * maximumTargetVolumeSinceChangingVolumeBegan;                     //@synthesize maximumTargetVolumeSinceChangingVolumeBegan=_maximumTargetVolumeSinceChangingVolumeBegan - In the implementation block
@property (nonatomic,readonly) NSString * volumeCategory;                                                //@synthesize volumeCategory=_volumeCategory - In the implementation block
@property (nonatomic,retain) AVSystemController * sharedSystemController;                                //@synthesize sharedSystemController=_sharedSystemController - In the implementation block
@property (assign,getter=isFullyInitialized,nonatomic) BOOL fullyInitialized;                            //@synthesize fullyInitialized=_fullyInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
+(id)volumeController;
+(id)windowSceneVolumeHUDAssertions;
-(id)init;
-(void)dealloc;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)EUVolumeLimit;
-(BOOL)currentRouteHasVolumeControl;
-(AVSystemController *)sharedSystemController;
-(float)effectiveVolumeLimit;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3 ;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1 ;
-(void)endChangingVolume;
-(void)setTargetVolume:(float)arg1 ;
-(BOOL)isChangingVolume;
-(void)_removeVolumeHUDAssertionsForClientID:(id)arg1 ;
-(id)_windowSceneIdentifiersWithVolumeHUDAssertions;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 forWindowSceneSessionIdentifier:(id)arg2 ;
-(void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2 ;
-(void)_observeSystemController;
-(void)_unobserveSystemController;
-(void)_handleSystemControllerServerDiedNotification;
-(void)_handleEUVolumeLimitDidChangeNotification:(id)arg1 ;
-(void)_handleSystemVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1 ;
-(void)_applyProposedVolumeIfNeeded;
-(void)_applyProposedVolumeImmediately;
-(void)_performOnMainThread:(/*^block*/id)arg1 ;
-(void)setChangingVolume:(BOOL)arg1 ;
-(void)setCurrentRouteHasVolumeControl:(BOOL)arg1 ;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isEUVolumeLimitEnabled;
-(void)setEUVolumeLimitEnabled:(BOOL)arg1 ;
-(BOOL)isEUVolumeLimitOverridden;
-(void)setEUVolumeLimitOverridden:(BOOL)arg1 ;
-(BOOL)volumeChangesThrottled;
-(void)setVolumeChangesThrottled:(BOOL)arg1 ;
-(BOOL)canOverrideEUVolumeLimit;
-(void)setCanOverrideEUVolumeLimit:(BOOL)arg1 ;
-(NSNumber *)targetVolumeInternal;
-(void)setTargetVolumeInternal:(NSNumber *)arg1 ;
-(NSNumber *)maximumTargetVolumeSinceChangingVolumeBegan;
-(void)setMaximumTargetVolumeSinceChangingVolumeBegan:(NSNumber *)arg1 ;
-(NSString *)volumeCategory;
-(void)setSharedSystemController:(AVSystemController *)arg1 ;
-(BOOL)isFullyInitialized;
-(void)setFullyInitialized:(BOOL)arg1 ;
@end

