/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMAudioAccessoryManager : NSObject {

	id _internal;

}

@property (assign,setter=_setAudioAccessoryAccelerometerUpdateInterval:,nonatomic) double _audioAccessoryAccelerometerUpdateInterval; 
@property (getter=_isAudioAccessoryAccelerometerAvailable,nonatomic,readonly) BOOL _audioAccessoryAccelerometerAvailable; 
@property (assign,setter=_setAudioAccessoryGyroUpdateInterval:,nonatomic) double _audioAccessoryGyroUpdateInterval; 
@property (getter=_isAudioAccessoryGyroAvailable,nonatomic,readonly) BOOL _audioAccessoryGyroAvailable; 
@property (getter=_isAudioAccessoryDeviceMotionAvailable,nonatomic,readonly) BOOL _audioAccessoryDeviceMotionAvailable; 
@property (assign,setter=_setAudioAccessoryDeviceMotionUpdateInterval:,nonatomic) double _audioAccessoryDeviceMotionUpdateInterval; 
+(BOOL)_selectActiveAudioRouteForGyroWithBTAddress:(id)arg1 modelID:(id)arg2 ;
+(BOOL)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)arg1 modelID:(id)arg2 ;
+(BOOL)_selectActiveAudioRouteWithBTAddress:(id)arg1 modelID:(id)arg2 ;
+(BOOL)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)arg1 modelID:(id)arg2 ;
+(BOOL)_isAvailable;
-(id)initPrivate;
-(id)init;
-(void)onAudioAccessoryAccelerometer:(const Sample*)arg1 ;
-(void)onAudioAccessoryGyro:(const Sample*)arg1 ;
-(void)onAudioAccessoryDeviceMotion:(const AudioAccessorySample*)arg1 ;
-(void)onAudioAccessoryDeviceMotionConfig:(const Config*)arg1 ;
-(void)onAudioAccessoryDeviceMotionStatus:(const int*)arg1 ;
-(id)_audioAccessoryGyroData;
-(void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)arg1 ;
-(void)_isAudioAccessoryAccelerometerAvailablePrivate;
-(void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
-(void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_isAudioAccessoryAccelerometerAvailable;
-(void)_setAudioAccessoryGyroUpdateIntervalPrivate:(double)arg1 ;
-(void)_isAudioAccessoryGyroAvailablePrivate;
-(void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopAudioAccessoryGyroUpdatesPrivate;
-(BOOL)_isAudioAccessoryGyroAvailable;
-(void)_isAudioAccessoryDeviceMotionAvailablePrivate;
-(id)_audioAccessoryAccelerometerData;
-(void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(double)arg1 ;
-(void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
-(void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)arg1 lowLatencyMode:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_setAudioAccessoryGyroUpdateInterval:(double)arg1 ;
-(void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_isAudioAccessoryDeviceMotionAvailable;
-(void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
-(void)_setAudioAccessoryAccelerometerUpdateInterval:(double)arg1 ;
-(double)_audioAccessoryAccelerometerUpdateInterval;
-(void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopAudioAccessoryAccelerometerUpdates;
-(double)_audioAccessoryGyroUpdateInterval;
-(void)_stopAudioAccessoryGyroUpdates;
-(void)_startAudioAccessoryGyroUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_setAudioAccessoryDeviceMotionUpdateInterval:(double)arg1 ;
-(double)_audioAccessoryDeviceMotionUpdateInterval;
-(void)_stopAudioAccessoryDeviceMotionUpdates;
-(void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)arg1 lowLatencyMode:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopAudioAccessoryDeviceMotionStatusUpdates;
-(void)deallocPrivate;
-(void)dealloc;
@end

