/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, RMConnectionClient;

@interface RMAudioListenerPoseManager : NSObject {

	BOOL _isReceivingRelatveData;
	NSDictionary* _tempestOptions;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _relativeDataCallback;
	RMConnectionClient* _connectionClient;

}

@property (nonatomic,retain) NSDictionary * tempestOptions;              //@synthesize tempestOptions=_tempestOptions - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)invalidate;
-(void)setTempestOptions:(NSDictionary *)arg1 ;
-(void)_startReceivingAudioListenerPoseUpdatesInternal:(/*^block*/id)arg1 ;
-(void)stopReceivingAudioListenerPoseUpdates;
-(NSDictionary *)tempestOptions;
-(void)startReceivingAudioListenerPoseUpdates:(/*^block*/id)arg1 ;
@end

