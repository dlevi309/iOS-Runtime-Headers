/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSString, NSData;

@interface ECEncodedWordEncoder : NSObject {

	unsigned long long _stringEncoding;
	NSString* _language;
	NSString* _string;
	NSString* _characterSet;
	long long _encodedWordEncoding;
	NSData* _decodedText;
	unsigned long long _singleEncodedWordLength;

}

@property (nonatomic,readonly) unsigned long long stringEncoding;                          //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                                     //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * characterSet;                                        //@synthesize characterSet=_characterSet - In the implementation block
@property (assign,nonatomic) long long encodedWordEncoding;                                //@synthesize encodedWordEncoding=_encodedWordEncoding - In the implementation block
@property (nonatomic,copy) NSData * decodedText;                                           //@synthesize decodedText=_decodedText - In the implementation block
@property (assign,nonatomic) unsigned long long singleEncodedWordLength;                   //@synthesize singleEncodedWordLength=_singleEncodedWordLength - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumLengthOfEncodedWord; 
-(id)init;
-(NSString *)characterSet;
-(id)description;
-(void)setCharacterSet:(NSString *)arg1 ;
-(NSString *)string;
-(NSString *)language;
-(void)setEncodedWordEncoding:(long long)arg1 ;
-(long long)encodedWordEncoding;
-(unsigned long long)stringEncoding;
-(void)_prepareForEncoding;
-(unsigned long long)singleEncodedWordLength;
-(unsigned long long)_lengthOfQEncodedTextForBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)setDecodedText:(NSData *)arg1 ;
-(void)setSingleEncodedWordLength:(unsigned long long)arg1 ;
-(unsigned long long)_bEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
-(unsigned long long)_qEncodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
-(unsigned long long)_writeEncodedWordPreambleToBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)decodedText;
-(void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char*)arg1 fromDecodedBytes:(const char*)arg2 length:(unsigned long long)arg3 ;
-(BOOL)_getBytesWithoutSplittingComposedCharacters:(void*)arg1 targetQEncodedTextLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 splitComposedCharacterSequence:(BOOL*)arg4 usedQEncodedTextLength:(unsigned long long*)arg5 extraLength:(unsigned long long*)arg6 extraQEncodedTextLength:(unsigned long long*)arg7 fromString:(id)arg8 stringEncoding:(unsigned long long)arg9 range:(NSRange)arg10 remainingRange:(NSRange*)arg11 ;
-(const char*)_findNextByteThatNeedsQEncodingBetweenStartByte:(const char*)arg1 endByte:(const char*)arg2 ;
-(id)initWithString:(id)arg1 stringEncoding:(unsigned long long)arg2 language:(id)arg3 ;
-(unsigned long long)minimumLengthOfEncodedWord;
-(unsigned long long)encodeToHeaderData:(id)arg1 currentLineLength:(unsigned long long)arg2 ;
@end

