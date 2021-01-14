/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider {

	BOOL _useNoContentDashFormatting;
	BOOL _useAllSmallCaps;
	BOOL _useLowercaseSmallCaps;
	NSString* _text;
	NSString* _shortText;

}

@property (assign,nonatomic) BOOL useNoContentDashFormatting;              //@synthesize useNoContentDashFormatting=_useNoContentDashFormatting - In the implementation block
@property (assign,nonatomic) BOOL useAllSmallCaps;                         //@synthesize useAllSmallCaps=_useAllSmallCaps - In the implementation block
@property (assign,nonatomic) BOOL useLowercaseSmallCaps;                   //@synthesize useLowercaseSmallCaps=_useLowercaseSmallCaps - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * shortText;                           //@synthesize shortText=_shortText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithText:(id)arg1 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 ;
+(id)finalizedTextProviderWithText:(id)arg1 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
+(id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(BOOL)arg2 ;
-(id)initWithText:(id)arg1 ;
-(id)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)_validate;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)shortText;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(void)setUseLowercaseSmallCaps:(BOOL)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)initWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)setShortText:(NSString *)arg1 ;
-(BOOL)useLowercaseSmallCaps;
-(id)initWithText:(id)arg1 shortText:(id)arg2 ;
-(BOOL)useNoContentDashFormatting;
-(void)setUseNoContentDashFormatting:(BOOL)arg1 ;
-(BOOL)useAllSmallCaps;
-(void)setUseAllSmallCaps:(BOOL)arg1 ;
@end

