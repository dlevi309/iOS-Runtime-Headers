/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

