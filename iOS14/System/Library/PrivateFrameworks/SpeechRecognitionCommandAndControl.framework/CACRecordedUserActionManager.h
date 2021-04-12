/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isRecording;
-(id)init;
-(BOOL)isExecuting;
-(void)cancelExecution;
-(void)addRecognizedSpokenCommand:(id)arg1 ;
-(void)startRecordingUserActions;
-(void)stopRecordingUserActions;
-(id)recordedUserActionFlow;
-(void)beginExecutingRecordedUserActionFlow:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

