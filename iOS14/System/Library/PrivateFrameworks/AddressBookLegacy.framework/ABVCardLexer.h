/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSMutableData, NSArray, ABVCardWatchdogTimer;

@interface ABVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned long long _length;
	unsigned _peakedPoint;
	unsigned _cursor;
	BOOL _unicode;
	int _errorCount;
	NSArray* _activeTokenSets;
	ABVCardWatchdogTimer* _timer;

}
-(BOOL)atEOF;
-(int)tokenAtCursor;
-(BOOL)advancePastEOL;
-(id)tokenName:(int)arg1 ;
-(int)advanceToString;
-(id)nextBase64Line:(BOOL*)arg1 ;
-(id)tokenSetForLength:(int)arg1 ;
-(int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2 ;
-(int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2 ;
-(BOOL)advancedPastToken:(int)arg1 ;
-(BOOL)advanceToEOL;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(void)advanceToPeakPoint;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3 ;
-(BOOL)_advancePastLineFoldingSequenceIfNeeded;
-(id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5 ;
-(id)nextUnicodeBase64Line:(BOOL*)arg1 ;
-(id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(id)nextSingleByteBase64Line:(BOOL*)arg1 ;
-(int)advanceToUnicodeString;
-(int)advanceToSingleByteString;
-(int)nextTokenPeak:(BOOL)arg1 ;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advancePastEOLSingle;
-(id)initWithData:(id)arg1 watchdogTimer:(id)arg2 ;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 ;
-(id)nextBase64Data;
-(BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2 ;
-(unsigned)cursor;
-(int)errorCount;
-(void)dealloc;
@end

