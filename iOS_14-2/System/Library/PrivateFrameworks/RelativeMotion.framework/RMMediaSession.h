/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/


#import <RelativeMotion/RelativeMotion-Structs.h>
@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject {

	BOOL _sessionStartedWithTracking;
	RMRelativeMotionManager* _manager;

}

@property (nonatomic,retain) RMRelativeMotionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign) BOOL sessionStartedWithTracking;                          //@synthesize sessionStartedWithTracking=_sessionStartedWithTracking - In the implementation block
+(BOOL)isAvailable;
-(id)_initWithOptions:(id)arg1 ;
-(id)init;
-(void)setManager:(RMRelativeMotionManager *)arg1 ;
-(BOOL)_start;
-(long long)_currentAudioListenerPose:(SCD_Struct_RM2*)arg1 timestamp:(double*)arg2 ;
-(void)_stop;
-(RMRelativeMotionManager *)manager;
-(void)dealloc;
-(void)_resetTrackingForAllClients;
-(BOOL)sessionStartedWithTracking;
-(void)setSessionStartedWithTracking:(BOOL)arg1 ;
-(void)_spatialAudioLockToDeviceChanged;
-(long long)_currentAudioListenerPose:(id*)arg1 ;
@end

