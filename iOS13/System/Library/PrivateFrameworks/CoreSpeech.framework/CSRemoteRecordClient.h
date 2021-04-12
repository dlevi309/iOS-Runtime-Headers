/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSRemoteRecordClientDelegate;
@class NSObject;

@interface CSRemoteRecordClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteRecordClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteRecordClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CSRemoteRecordClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteRecordClientDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)isRecording;
-(id)voiceTriggerEventInfo;
-(BOOL)stopRecording:(id*)arg1 ;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)didPlayEndpointBeep;
-(BOOL)hasPendingTwoShotBeep;
@end

