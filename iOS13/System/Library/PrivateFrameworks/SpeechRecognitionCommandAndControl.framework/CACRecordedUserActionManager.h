/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSMutableArray, CACRecordedUserActionFlow;

@interface CACRecordedUserActionManager : NSObject {

	NSMutableArray* _recordedUserActions;
	CACRecordedUserActionFlow* _executingUserActionFlow;
	BOOL _isRecording;
	BOOL _isExecuting;

}

@property (readonly) BOOL isRecording;              //@synthesize isRecording=_isRecording - In the implementation block
@property (readonly) BOOL isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)isExecuting;
-(BOOL)isRecording;
-(void)cancelExecution;
-(void)addRecognizedSpokenCommand:(id)arg1 ;
-(void)startRecordingUserActions;
-(void)stopRecordingUserActions;
-(id)recordedUserActionFlow;
-(void)beginExecutingRecordedUserActionFlow:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

