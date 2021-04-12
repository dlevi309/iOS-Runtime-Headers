/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AFAudioPowerUpdaterDelegate, AFAudioPowerProviding;
@class NSObject;

@interface AFAudioPowerUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	id<AFAudioPowerUpdaterDelegate> _delegate;
	void* _sharedMemory;
	float _averagePower;
	float _peakPower;
	id<AFAudioPowerProviding> _provider;
	long long _frequency;

}

@property (nonatomic,readonly) id<AFAudioPowerProviding> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) long long frequency;                             //@synthesize frequency=_frequency - In the implementation block
-(long long)frequency;
-(void)_invalidate;
-(id<AFAudioPowerProviding>)provider;
-(void)beginUpdate;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4 ;
-(void)_endUpdate;
-(void)_timerFired;
-(void)_beginUpdate;
-(void)_getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)_destroySharedMemory;
-(void)endUpdate;
-(void)_createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2 ;
-(void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(BOOL)_createSharedMemory;
-(id)_createNewXPCWrapper;
-(id)_createSharedMemoryXPCObject;
-(void)getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(float)_unsafeAveragePower;
-(float)_unsafePeakPower;
-(void)dealloc;
@end

