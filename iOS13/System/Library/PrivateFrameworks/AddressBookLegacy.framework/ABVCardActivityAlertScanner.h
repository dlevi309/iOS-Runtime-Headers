/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}
+(id)scannerWithString:(id)arg1 ;
+(BOOL)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)position;
-(BOOL)atEnd;
-(unsigned short)nextCharacter;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(BOOL)scanPastItemDelimiter;
-(id)scanStringValue;
-(BOOL)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(BOOL)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg1 ;
-(void)scanPastWhitespace;
@end

