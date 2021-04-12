/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVVolumeController <NSObject>
@property (getter=isChangingVolume,nonatomic,readonly) BOOL changingVolume; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
@property (nonatomic,readonly) BOOL currentRouteHasVolumeControl; 
@required
+(id)volumeController;
-(BOOL)currentRouteHasVolumeControl;
-(float)effectiveVolumeLimit;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
-(void)endChangingVolume;
-(void)setTargetVolume:(float)arg1;
-(BOOL)isChangingVolume;
-(float)volume;

@end

