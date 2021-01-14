/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet, NSDictionary;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _codings;

}

@property (nonatomic,copy,readonly) NSArray * codings;                           //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) NSSet * uniqueCodings; 
@property (nonatomic,copy,readonly) NSDictionary * codingsBySystem; 
+(BOOL)supportsSecureCoding;
+(id)collectionWithCodings:(id)arg1 ;
+(id)collectionWithCoding:(id)arg1 ;
-(NSSet *)uniqueCodings;
-(id)init;
-(id)initWithCodings:(id)arg1 ;
-(id)codingsForCodingSystem:(id)arg1 ;
-(NSDictionary *)codingsBySystem;
-(NSArray *)codings;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

