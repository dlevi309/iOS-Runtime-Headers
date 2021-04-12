/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id<AFAudioPowerProviding>)provider;
-(long long)frequency;
-(void)_timerFired;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4 ;
-(void)beginUpdate;
-(void)endUpdate;
-(float)_unsafeAveragePower;
-(float)_unsafePeakPower;
-(void)_beginUpdate;
-(void)_getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)_endUpdate;
-(void)_createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2 ;
-(void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_destroySharedMemory;
-(BOOL)_createSharedMemory;
-(id)_createNewXPCWrapper;
-(id)_createSharedMemoryXPCObject;
-(void)getPowerWithCompletion:(/*^block*/id)arg1 ;
-(void)createNewXPCWrapperWithCompletion:(/*^block*/id)arg1 ;
@end

