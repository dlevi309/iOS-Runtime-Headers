/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INCurrencyAmountExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;               //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)currencyCode;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)initWithAmount:(id)arg1 currencyCode:(id)arg2 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

