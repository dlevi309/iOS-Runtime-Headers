/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INPriceRange *)priceRange;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSRange)partySizeRange;
-(NSString *)sizeDescription;
-(id)initWithPartySizeRange:(NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3 ;
@end

