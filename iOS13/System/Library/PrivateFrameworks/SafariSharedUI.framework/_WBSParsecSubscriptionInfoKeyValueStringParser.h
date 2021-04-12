/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {

	NSString* _string;
	unsigned long long _index;

}
+(id)parseKeyValuePairsFromString:(id)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(BOOL)_isAtEnd;
-(id)_parseKeyValuePairs;
-(BOOL)_parseKeyValuePairWithKey:(id*)arg1 value:(id*)arg2 ;
-(unsigned short)_previewCharacter;
-(unsigned short)_consumeCharacter;
-(void)_skipWhitespace;
-(id)_parseKey;
-(id)_parseValue;
-(id)_parseUpToCharacterFromSet:(id)arg1 ;
-(id)_parseJSONValue;
@end

