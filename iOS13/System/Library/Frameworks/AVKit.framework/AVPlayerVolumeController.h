/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVVolumeController.h>

@class AVPlayerController, AVObservationController, NSString;

@interface AVPlayerVolumeController : NSObject <AVVolumeController> {

	BOOL _changingVolume;
	AVPlayerController* _playerController;
	AVObservationController* _keyValueObservationController;

}

@property (assign,getter=isChangingVolume,nonatomic) BOOL changingVolume;                          //@synthesize changingVolume=_changingVolume - In the implementation block
@property (nonatomic,retain) AVObservationController * keyValueObservationController;              //@synthesize keyValueObservationController=_keyValueObservationController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                //@synthesize playerController=_playerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
@property (nonatomic,readonly) BOOL currentRouteHasVolumeControl; 
+(id)volumeController;
-(id)init;
-(void)dealloc;
-(float)volume;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)currentRouteHasVolumeControl;
-(float)effectiveVolumeLimit;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3 ;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1 ;
-(void)endChangingVolume;
-(void)setTargetVolume:(float)arg1 ;
-(BOOL)isChangingVolume;
-(void)setChangingVolume:(BOOL)arg1 ;
-(AVObservationController *)keyValueObservationController;
-(void)setKeyValueObservationController:(AVObservationController *)arg1 ;
@end

