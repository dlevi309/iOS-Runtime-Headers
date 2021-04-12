/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {

	NSString* _resultString;
	NSString* _statusString;
	SCD_Union_VS3 _spokenString;
	VSRecognitionSession* _session;
	unsigned _spokenStringIsAttributed : 1;

}
-(void)dealloc;
-(id)cancel;
-(id)_session;
-(id)perform;
-(int)completionType;
-(void)_continueAfterDeferredStart;
-(BOOL)_hasDeferredStartCallback;
-(void)_setSession:(id)arg1 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(id)resultDisplayString;
-(id)statusDisplayString;
-(BOOL)sensitiveActionsEnabled;
-(void)setResultDisplayString:(id)arg1 ;
-(void)setStatusDisplayString:(id)arg1 ;
-(void)setSpokenFeedbackString:(id)arg1 ;
-(void)setSpokenFeedbackAttributedString:(id)arg1 ;
-(void)completeWithNextAction:(id)arg1 error:(id)arg2 ;
@end

