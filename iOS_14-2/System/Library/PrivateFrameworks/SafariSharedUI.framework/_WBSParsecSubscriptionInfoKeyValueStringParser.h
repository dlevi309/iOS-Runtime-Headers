/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {

	NSString* _string;
	unsigned long long _index;

}
+(id)parseKeyValuePairsFromString:(id)arg1 ;
-(BOOL)_isAtEnd;
-(id)_initWithString:(id)arg1 ;
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

