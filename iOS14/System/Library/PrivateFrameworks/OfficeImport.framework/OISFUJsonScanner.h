/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSCharacterSet;

@interface OISFUJsonScanner : NSObject {

	NSString* mString;
	unsigned short* mCharacters;
	unsigned long long mLength;
	unsigned long long mOffset;
	NSCharacterSet* mWhitespaceCharacterSet;
	NSCharacterSet* mDecimalDigitCharacterSet;

}
-(id)initWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
-(void)dealloc;
-(void)skipWhitespace;
-(id)parseObjectWithMaxDepth:(int)arg1 ;
-(id)parseArrayWithMaxDepth:(int)arg1 ;
-(id)parseDictionaryWithMaxDepth:(int)arg1 ;
-(void)appendCharactersInRange:(NSRange)arg1 toString:(id)arg2 ;
-(id)parseHexCharacter;
-(id)parseString;
-(BOOL)parseConstantString:(const char*)arg1 ;
-(id)parseNull;
-(id)parseTrue;
-(id)parseFalse;
-(id)parseNumber;
@end

