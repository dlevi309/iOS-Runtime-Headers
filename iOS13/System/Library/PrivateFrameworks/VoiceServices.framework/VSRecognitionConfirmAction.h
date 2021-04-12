/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {

	VSRecognitionAction* _confirmedAction;
	VSRecognitionAction* _deniedAction;
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	}  _confirmFlags;

}
-(id)init;
-(void)dealloc;
-(int)completionType;
-(id)initWithModelIdentifier:(id)arg1 ;
-(void)_setConfirmed:(BOOL)arg1 ;
-(void)setConfirmedAction:(id)arg1 ;
-(id)confirmedAction;
-(void)setDeniedAction:(id)arg1 ;
-(id)deniedAction;
@end

