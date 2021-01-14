/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRidePartySizeOptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INPriceRange;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding> {

	NSString* _sizeDescription;
	INPriceRange* _priceRange;
	NSRange _partySizeRange;

}

@property (nonatomic,readonly) NSRange partySizeRange;                  //@synthesize partySizeRange=_partySizeRange - In the implementation block
@property (nonatomic,readonly) NSString * sizeDescription;              //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (nonatomic,readonly) INPriceRange * priceRange;               //@synthesize priceRange=_priceRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSRange)partySizeRange;
-(NSString *)sizeDescription;
-(id)initWithPartySizeRange:(NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INPriceRange *)priceRange;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

