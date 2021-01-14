/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

