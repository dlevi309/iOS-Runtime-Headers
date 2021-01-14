/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INRentalCar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _rentalCompanyName;
	NSString* _type;
	NSString* _make;
	NSString* _model;
	NSString* _rentalCarDescription;

}

@property (nonatomic,copy,readonly) NSString * rentalCompanyName;                 //@synthesize rentalCompanyName=_rentalCompanyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * make;                              //@synthesize make=_make - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * rentalCarDescription;              //@synthesize rentalCarDescription=_rentalCarDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)make;
-(NSString *)model;
-(NSString *)rentalCompanyName;
-(NSString *)rentalCarDescription;
-(id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

