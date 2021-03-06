/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

