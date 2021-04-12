/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/


@protocol OS_dispatch_queue;
#import <RelativeMotion/RelativeMotion-Structs.h>
@class RMDummyData, NSObject, RMDummyDataManager, NSUserDefaults, RMAudioListenerPoseManager;

@interface RMRelativeMotionManager : NSObject {

	RMDummyData* _dummyDataBuffer[2];
	int _dummyDataBufferIndex;
	os_unfair_lock_s _dummyDataBufferLock;
	int _currentDummyDataBufferIndex;
	SCD_Struct_RM5 _audioListenerPoseBuffer[2];
	long long _audioListenerPoseErrorBuffer[2];
	int _audioListenerPoseBufferIndex;
	os_unfair_lock_s _audioListenerPoseBufferLock;
	BOOL _shouldReceiveDummyData;
	BOOL _shouldReceiveAudioListenerPose;
	BOOL _verboseLatencyAnalysisLogging;
	int _currentAudioListenerPoseBufferIndex;
	NSObject*<OS_dispatch_queue> _queue;
	RMDummyDataManager* _dummyDataManager;
	NSUserDefaults* _defaults;
	RMAudioListenerPoseManager* _audioListenerPoseManager;

}
+(BOOL)isAudioListenerPoseAvailable;
-(id)initWithQueue:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)startReceivingAudioListenerPose;
-(void)stopReceivingAudioListenerPose;
-(void)resetAudioListenerPoseTrackingForAllClients;
-(long long)getCurrentAudioListenerPose:(SCD_Struct_RM3*)arg1 timestamp:(double*)arg2 ;
-(id)getCurrentAudioListenerPoseWithError:(long long*)arg1 ;
-(void)startReceivingDummyData;
-(void)stopReceivingDummyData;
-(id)getCurrentDummyData;
@end

