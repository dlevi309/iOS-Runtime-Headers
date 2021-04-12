/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFBLERecorderReplayDelegate;
@class NSMutableArray;

@interface SFBLERecorder : NSObject {

	NSMutableArray* _recordings;
	unsigned long long _replayIndex;
	long long _payloadType;
	id<SFBLERecorderReplayDelegate> _replayDelegate;

}

@property (nonatomic,readonly) long long payloadType;                                            //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic,__weak) id<SFBLERecorderReplayDelegate> replayDelegate;              //@synthesize replayDelegate=_replayDelegate - In the implementation block
-(id<SFBLERecorderReplayDelegate>)replayDelegate;
-(id)initWithPayloadType:(long long)arg1 ;
-(id)initWithRecordingURL:(id)arg1 ;
-(BOOL)recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)replayNextRecording;
-(void)setReplayDelegate:(id<SFBLERecorderReplayDelegate>)arg1 ;
-(long long)payloadType;
-(BOOL)saveToDirectory:(id)arg1 ;
@end

