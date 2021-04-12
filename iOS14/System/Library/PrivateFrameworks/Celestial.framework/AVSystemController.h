/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface AVSystemController : NSObject {

	AVSystemControllerPrivate* _priv;

}

@property (nonatomic,readonly) BOOL an_isCarPlayConnected; 
+(void)initialize;
+(id)sharedAVSystemController;
+(id)compatibleAudioRouteForRoute:(id)arg1 ;
-(BOOL)an_isCarPlayConnected;
-(void)postFullMuteDidChangeNotification:(void*)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)setVolumeForRouteTo:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(id)routeForCategory:(id)arg1 ;
-(BOOL)changeVolumeForRoute:(BOOL)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)currentRouteHasVolumeControl;
-(id)init;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 ;
-(BOOL)changeVolume:(BOOL)arg1 forCategory:(id)arg2 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)changeVolumeForRouteBy:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)okToNotifyFromThisThread;
-(void)handleServerDied;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 ;
-(BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)getVolume:(float*)arg1 forCategory:(id)arg2 ;
-(BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 ;
-(BOOL)getVibeIntensity:(float*)arg1 ;
-(BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg1 ;
-(BOOL)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(BOOL)arg2 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 ;
-(id)volumeCategoryForAudioCategory:(id)arg1 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)allowUserToExceedEUVolumeLimit;
-(BOOL)setVibeIntensityTo:(float)arg1 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3 ;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(BOOL)getVolumeForRoute:(float*)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6 ;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(BOOL)shouldClientWithAudioScore:(int)arg1 hijackRoute:(id)arg2 hijackDeniedReason:(id*)arg3 ;
-(id)errorWithCode:(int)arg1 description:(id)arg2 ;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(void)postEffectiveVolumeNotification:(void*)arg1 ;
-(BOOL)hasRouteSharingPolicyLongFormVideo:(id)arg1 ;
-(BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)didCancelRoutePicking:(id)arg1 ;
-(BOOL)toggleActiveCategoryMuted;
-(void)dealloc;
@end

