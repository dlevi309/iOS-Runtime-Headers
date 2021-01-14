/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSRemoteRecordClientDelegate;
@class NSObject;

@interface CSRemoteRecordClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteRecordClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteRecordClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isConnected;
-(BOOL)isRecording;
-(id)init;
-(id<CSRemoteRecordClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteRecordClientDelegate>)arg1 ;
-(id)voiceTriggerEventInfo;
-(BOOL)stopRecording:(id*)arg1 ;
-(void)dealloc;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)didPlayEndpointBeep;
-(BOOL)hasPendingTwoShotBeep;
@end

