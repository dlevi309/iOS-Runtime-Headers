/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRideFareLineItemExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface INRideFareLineItem : NSObject <INRideFareLineItemExport, NSCopying, NSSecureCoding> {

	NSString* _title;
	NSDecimalNumber* _price;
	NSString* _currencyCode;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * price;              //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)title;
-(id)_dictionaryRepresentation;
-(NSDecimalNumber *)price;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3 ;
@end

