/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration <NSSecureCoding> {

	NSSet* _sampleQueryDescriptions;

}

@property (nonatomic,copy) NSSet * sampleQueryDescriptions;              //@synthesize sampleQueryDescriptions=_sampleQueryDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSampleQueryDescriptions:(NSSet *)arg1 ;
-(NSSet *)sampleQueryDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

