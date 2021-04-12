/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {

	NSDictionary* _collectionIntervals;

}

@property (nonatomic,copy) NSDictionary * collectionIntervals;              //@synthesize collectionIntervals=_collectionIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionIntervals:(NSDictionary *)arg1 ;
-(NSDictionary *)collectionIntervals;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

