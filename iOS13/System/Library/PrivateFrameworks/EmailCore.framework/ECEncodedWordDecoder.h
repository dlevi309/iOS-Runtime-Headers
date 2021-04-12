/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSNumber, NSString, NSData;

@interface ECEncodedWordDecoder : NSObject {

	NSNumber* _stringEncoding;
	NSString* _language;
	NSData* _headerData;
	long long _encodedWordEncoding;
	NSRange _encodedTextRange;

}

@property (nonatomic,copy,readonly) NSData * headerData;                 //@synthesize headerData=_headerData - In the implementation block
@property (nonatomic,retain) NSNumber * stringEncoding;                  //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) long long encodedWordEncoding;              //@synthesize encodedWordEncoding=_encodedWordEncoding - In the implementation block
@property (assign,nonatomic) NSRange encodedTextRange;                   //@synthesize encodedTextRange=_encodedTextRange - In the implementation block
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSData *)headerData;
-(id)_encodedWordStartSequence;
-(id)_lineSeparator;
-(id)_encodedWordDelimiter;
-(id)_encodedWordEndSequence;
-(void)setEncodedWordEncoding:(long long)arg1 ;
-(void)setStringEncoding:(NSNumber *)arg1 ;
-(void)setEncodedTextRange:(NSRange)arg1 ;
-(id)_encodedWordLanguageDelimiter;
-(long long)encodedWordEncoding;
-(NSRange)encodedTextRange;
-(BOOL)_decodeBEncodedTextToData:(id)arg1 ;
-(BOOL)_decodeQEncodedTextToData:(id)arg1 ;
-(void)_enumerateQByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithHeaderData:(id)arg1 ;
-(NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1 ;
-(BOOL)decodeEncodedTextToData:(id)arg1 ;
-(NSNumber *)stringEncoding;
@end

