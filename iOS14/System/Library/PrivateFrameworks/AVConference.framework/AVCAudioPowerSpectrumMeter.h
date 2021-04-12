/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject, NSSet;

@interface AVCAudioPowerSpectrumMeter : NSObject {

	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	double _audioSpectrumRefreshRate;
	unsigned short _audioSpectrumBinCount;
	unsigned _sessionToken;
	NSSet* _whiteListedXPCObjects;

}

@property (nonatomic,readonly) id<AVCAudioPowerSpectrumMeterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sessionToken;                                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id<AVCAudioPowerSpectrumMeterDelegate>)delegate;
-(unsigned)sessionToken;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)deregisterBlocksForService;
-(id)initWithConfig:(AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)registerPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)unregisterPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)dealloc;
-(void)registerBlocksForNotifications;
@end

