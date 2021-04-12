/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVVolumeController <NSObject>
@property (getter=isChangingVolume,nonatomic,readonly) BOOL changingVolume; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
@property (nonatomic,readonly) BOOL currentRouteHasVolumeControl; 
@required
+(id)volumeController;
-(float)volume;
-(BOOL)currentRouteHasVolumeControl;
-(float)effectiveVolumeLimit;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
-(void)endChangingVolume;
-(void)setTargetVolume:(float)arg1;
-(BOOL)isChangingVolume;

@end

