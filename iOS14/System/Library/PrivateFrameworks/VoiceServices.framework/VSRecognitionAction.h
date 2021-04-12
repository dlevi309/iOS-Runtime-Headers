/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cancel;
-(void)dealloc;
@end

