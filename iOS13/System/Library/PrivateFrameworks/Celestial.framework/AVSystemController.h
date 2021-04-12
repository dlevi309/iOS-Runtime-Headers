/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface AVSystemController : NSObject {

	AVSystemControllerPrivate* _priv;

}
+(void)initialize;
+(id)sharedAVSystemController;
+(id)compatibleAudioRouteForRoute:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)errorWithCode:(int)arg1 description:(id)arg2 ;
-(BOOL)hasRouteSharingPolicyLongFormVideo:(id)arg1 ;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)getVolume:(float*)arg1 forCategory:(id)arg2 ;
-(BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)allowUserToExceedEUVolumeLimit;
-(BOOL)currentRouteHasVolumeControl;
-(id)volumeCategoryForAudioCategory:(id)arg1 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 ;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(BOOL)okToNotifyFromThisThread;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3 ;
-(BOOL)setVibeIntensityTo:(float)arg1 ;
-(BOOL)getVibeIntensity:(float*)arg1 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4 ;
-(BOOL)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)getVolumeForAccessory:(float*)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)changeVolumeForRouteBy:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)setVolumeForRouteTo:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)getVolumeForRoute:(float*)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)toggleActiveCategoryMuted;
-(BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(BOOL)arg2 ;
-(BOOL)didCancelRoutePicking:(id)arg1 ;
-(BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2 ;
-(id)routeForCategory:(id)arg1 ;
-(void)handleServerDied;
-(void)postFullMuteDidChangeNotification:(void*)arg1 ;
-(void)postEffectiveVolumeNotification:(void*)arg1 ;
@end

