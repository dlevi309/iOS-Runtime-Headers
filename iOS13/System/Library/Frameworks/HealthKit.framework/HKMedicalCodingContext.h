/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKMedicalCodingCollection, NSString;

@interface HKMedicalCodingContext : NSObject <NSCopying, NSSecureCoding> {

	HKMedicalCodingCollection* _collection;
	NSString* _country;

}

@property (nonatomic,copy,readonly) HKMedicalCodingCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                                  //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithCodings:(id)arg1 country:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalCodingCollection *)collection;
-(NSString *)country;
-(id)initWithCollection:(id)arg1 country:(id)arg2 ;
@end

