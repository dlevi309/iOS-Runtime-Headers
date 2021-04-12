/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <VoiceServices/VSRecognitionURLAction.h>

@class NSString;

@interface VoiceDialRecognitionAction : VSRecognitionURLAction {

	NSString* _phoneNumber;
	int _uid;

}
-(id)perform;
-(id)initWithPhoneNumber:(id)arg1 uid:(int)arg2 ;
@end

