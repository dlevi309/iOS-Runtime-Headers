/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPriceRangeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding> {

	NSDecimalNumber* _minimumPrice;
	NSDecimalNumber* _maximumPrice;
	NSString* _currencyCode;

}

@property (nonatomic,readonly) NSDecimalNumber * minimumPrice;              //@synthesize minimumPrice=_minimumPrice - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * maximumPrice;              //@synthesize maximumPrice=_maximumPrice - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                     //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_priceWithPriceRangeValue:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)currencyCode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(NSDecimalNumber *)maximumPrice;
-(NSDecimalNumber *)minimumPrice;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3 ;
-(id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

