/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


#import <BusinessChatService/BusinessChatService-Structs.h>
@class NSString, NSMutableArray;

@interface NBNumberFormat : NSObject {

	BOOL _nationalPrefixOptionalWhenFormatting;
	NSString* _pattern;
	NSString* _format;
	NSMutableArray* _leadingDigitsPatterns;
	NSString* _nationalPrefixFormattingRule;
	NSString* _domesticCarrierCodeFormattingRule;

}

@property (nonatomic,retain) NSString * pattern;                                        //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,retain) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSMutableArray * leadingDigitsPatterns;                    //@synthesize leadingDigitsPatterns=_leadingDigitsPatterns - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixFormattingRule;                   //@synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule - In the implementation block
@property (assign,nonatomic) BOOL nationalPrefixOptionalWhenFormatting;                 //@synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting - In the implementation block
@property (nonatomic,retain) NSString * domesticCarrierCodeFormattingRule;              //@synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pattern;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setPattern:(NSString *)arg1 ;
-(id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(BOOL)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6 ;
-(NSMutableArray *)leadingDigitsPatterns;
-(void)setLeadingDigitsPatterns:(NSMutableArray *)arg1 ;
-(NSString *)nationalPrefixFormattingRule;
-(void)setNationalPrefixFormattingRule:(NSString *)arg1 ;
-(BOOL)nationalPrefixOptionalWhenFormatting;
-(void)setNationalPrefixOptionalWhenFormatting:(BOOL)arg1 ;
-(NSString *)domesticCarrierCodeFormattingRule;
-(void)setDomesticCarrierCodeFormattingRule:(NSString *)arg1 ;
@end

