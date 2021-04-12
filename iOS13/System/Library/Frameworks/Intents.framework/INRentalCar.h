/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)make;
-(NSString *)rentalCarDescription;
-(NSString *)rentalCompanyName;
-(id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5 ;
@end

