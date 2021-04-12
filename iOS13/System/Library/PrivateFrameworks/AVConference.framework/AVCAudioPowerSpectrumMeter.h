/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCAudioPowerSpectrumMeter : NSObject {

	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	double _audioSpectrumRefreshRate;
	unsigned short _audioSpectrumBinCount;
	unsigned _sessionToken;

}

@property (nonatomic,readonly) id<AVCAudioPowerSpectrumMeterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sessionToken;                                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(void)dealloc;
-(id<AVCAudioPowerSpectrumMeterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned)sessionToken;
-(id)initWithConfig:(AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)registerPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)unregisterPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
@end

