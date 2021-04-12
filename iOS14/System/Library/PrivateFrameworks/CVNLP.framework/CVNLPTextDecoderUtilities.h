/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSCharacterSet;

@interface CVNLPTextDecoderUtilities : NSObject {

	NSCharacterSet* _whitespaceCharSet;
	NSCharacterSet* _lowercaseCharSet;
	NSCharacterSet* _uppercaseCharSet;
	NSCharacterSet* _separatorCharSet;
	NSCharacterSet* _punctuationCharSet;
	NSCharacterSet* _latinNumeralCharSet;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isStringWhitespace:(id)arg1 ;
-(BOOL)isLatinCharacter:(id)arg1 ;
-(BOOL)isStringPunctuation:(id)arg1 ;
-(BOOL)isStringLatinNumeral:(id)arg1 ;
-(unsigned long long)unicodeFromCharacterString:(id)arg1 ;
-(BOOL)isStringWordSeparator:(id)arg1 ;
-(BOOL)isStringLowercase:(id)arg1 ;
-(BOOL)isStringUppercase:(id)arg1 ;
-(unsigned long long)lengthOfString:(id)arg1 ;
@end

