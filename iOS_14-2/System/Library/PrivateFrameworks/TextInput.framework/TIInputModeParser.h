/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {

	NSMutableDictionary* _inputModeDicts;
	NSCharacterSet* _invalidCharacterSet;

}
+(id)sharedInstance;
-(id)init;
-(id)parseInputMode:(id)arg1 ;
-(id)stringByReplacingInvalidCharactersWithUnderscores:(id)arg1 ;
@end

