/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSString;

@interface CNVCardEncoding : NSObject {

	NSString* _name;
	unsigned long long _stringEncoding;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long stringEncoding;              //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(id)standardEncodings;
+(id)encodingsFromUserDefaults;
+(id)utf8Encoding;
+(id)makeStandardEncodings;
+(id)asciiEncoding;
+(id)isoLatin1Encoding;
+(id)macRomanEncoding;
+(id)preferredEncodingInUserDefaults;
+(id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2 ;
+(id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
-(NSString *)name;
-(unsigned long long)stringEncoding;
-(id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
@end

