/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


#import <vCard/vCard-Structs.h>
@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned long long _length;
	unsigned long long _peekedPoint;
	unsigned long long _cursor;
	BOOL _unicode;
	long long _errorCount;
	NSArray* _activeTokenSets;

}
+(id)utf16Tokens;
+(id)singleByteTokens;
+(id)returnDelimiterData;
-(BOOL)atEOF;
-(id)initWithData:(id)arg1 ;
-(int)tokenAtCursor;
-(BOOL)advancePastEOL;
-(long long)advanceToString;
-(id)nextBase64Line:(BOOL*)arg1 ;
-(id)tokenSetForLength:(long long)arg1 ;
-(BOOL)advancedPastToken:(int)arg1 ;
-(BOOL)advanceToEOL;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(id)nextUnicodeBase64Line:(BOOL*)arg1 ;
-(id)nextSingleByteBase64Line:(BOOL*)arg1 ;
-(long long)advanceToUnicodeString;
-(long long)advanceToSingleByteString;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advancePastEOLSingle;
-(id)nextBase64Data;
-(BOOL)advanceToToken:(int)arg1 throughTypes:(long long)arg2 ;
-(unsigned long long)cursor;
-(id)os_log;
-(long long)errorCount;
-(id)dataWithRange:(NSRange)arg1 ;
-(int)readNextToken;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 maximumValueLength:(unsigned long long)arg4 ;
-(int)peekAtNextToken;
-(void)advanceToPeekPoint;
-(id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5 ;
-(id)stringWithRange:(NSRange)arg1 encoding:(unsigned long long)arg2 ;
-(int)nextTokenPeek:(BOOL)arg1 ;
-(int)nextTokenPeek:(BOOL)arg1 length:(long long)arg2 ;
-(int)nextTokenPeekUnicode:(BOOL)arg1 length:(long long)arg2 ;
-(int)nextTokenPeekSingle:(BOOL)arg1 length:(long long)arg2 ;
-(id)nextQuotedStringValueInEncoding:(unsigned long long)arg1 ;
-(NSRange)emptyRangeStartingAtCursor;
-(void)appendDataInRange:(NSRange)arg1 toData:(id)arg2 ;
-(void)appendNextQuotedPrintableDataToData:(id)arg1 ;
-(void)appendNextEscapedCharacterToData:(id)arg1 ;
-(id)stringFromData:(id)arg1 encoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 ;
-(id)clipAtGraphemeClusters:(id)arg1 maximumValueLength:(unsigned long long)arg2 addEllipsisIfClipped:(BOOL)arg3 ;
-(id)stringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5 ;
-(void)skipToStopTokens:(int)arg1 ;
-(id)trimData:(id)arg1 withPrefixLength:(unsigned long long)arg2 suffixLength:(unsigned long long)arg3 ;
-(id)stringFromSubData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(NSRange)rangeWithLength:(unsigned long long)arg1 lTrim:(unsigned long long)arg2 rTrim:(unsigned long long)arg3 ;
-(NSRange)expandRange:(NSRange)arg1 untilNextByteIs:(id)arg2 ;
-(id)unicodeStringByRoundingData:(id)arg1 toNextWholeCharacterUsingEncoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 maximumValueLength:(unsigned long long)arg5 ;
-(void)unicodeSkipToStopTokens:(int)arg1 ;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3 maximumValueLength:(unsigned long long)arg4 ;
-(id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5 ;
-(BOOL)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 maximumValueLength:(unsigned long long)arg5 intoString:(id)arg6 ;
-(int)tokenAtCursorIgnoringLineFolding;
-(unsigned short)charAtPosition:(unsigned long long)arg1 withOffset:(long long)arg2 ;
@end

