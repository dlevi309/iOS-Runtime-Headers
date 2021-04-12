/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)codings;
-(id)initWithCodings:(id)arg1 ;
-(NSSet *)uniqueCodings;
-(id)codingsForCodingSystem:(id)arg1 ;
-(NSDictionary *)codingsBySystem;
@end

