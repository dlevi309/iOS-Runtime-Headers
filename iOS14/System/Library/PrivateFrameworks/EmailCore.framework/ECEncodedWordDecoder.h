/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLanguage:(NSString *)arg1 ;
-(NSData *)headerData;
-(id)_lineSeparator;
-(NSString *)language;
-(id)_encodedWordStartSequence;
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

