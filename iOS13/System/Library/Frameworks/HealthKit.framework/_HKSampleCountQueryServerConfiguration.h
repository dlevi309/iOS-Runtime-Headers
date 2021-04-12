/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)sampleQueryDescriptions;
-(void)setSampleQueryDescriptions:(NSSet *)arg1 ;
@end

