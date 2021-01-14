/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableNumberAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata {

	NSString* _currencyCode;
	NSArray* _currencyCodes;

}

@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSArray * currencyCodes;              //@synthesize currencyCodes=_currencyCodes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)currencyCode;
-(void)updateWithDictionary:(id)arg1 ;
-(NSArray *)currencyCodes;
-(id)__INCodableDescriptionCurrencyCodeKey;
-(id)__INCodableDescriptionCurrencyCodesKey;
-(id)__INTypeCodableDescriptionCurrencyCodesKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
-(id)__INTypeCodableDescriptionCurrencyCodeKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

