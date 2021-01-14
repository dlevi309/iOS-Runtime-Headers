/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VSRecognitionAction.h>

@interface VSRecognitionSpeakAction : VSRecognitionAction {

	BOOL _shouldTerminate;

}
-(id)perform;
-(int)completionType;
-(id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(BOOL)arg2 ;
@end

