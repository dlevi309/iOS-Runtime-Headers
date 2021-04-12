/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSDecimalNumber *)maximumPrice;
-(NSDecimalNumber *)minimumPrice;
-(id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3 ;
-(id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2 ;
@end

