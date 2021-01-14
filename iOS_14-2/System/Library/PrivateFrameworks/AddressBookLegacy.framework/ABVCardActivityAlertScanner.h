/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)position;
-(id)initWithString:(id)arg1 ;
-(BOOL)atEnd;
-(unsigned short)nextCharacter;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(BOOL)scanPastItemDelimiter;
-(id)scanStringValue;
-(unsigned short)scanCharacter;
-(BOOL)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(BOOL)scanPastCharacter:(unsigned short)arg1 ;
-(void)scanPastWhitespace;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg1 ;
-(void)dealloc;
@end

