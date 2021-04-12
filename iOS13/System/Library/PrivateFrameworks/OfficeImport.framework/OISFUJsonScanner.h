/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
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

