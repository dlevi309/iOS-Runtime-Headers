/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {

	NSDictionary* _commandAttributes;
	NSMutableDictionary* _commandStringsTablesByLocaleIdentifier;

}
+(id)sharedSpokenCommandUtilities;
-(id)init;
-(id)commandStringsTableForLocaleIdentifier:(id)arg1 ;
-(void)_flushBuiltInCommandsStringsTable;
-(id)commandAttributes;
@end

