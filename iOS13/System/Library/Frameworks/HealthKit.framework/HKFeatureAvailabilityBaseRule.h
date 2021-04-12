/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKFeatureAvailabilityDataSource;
@interface HKFeatureAvailabilityBaseRule : NSObject {

	id<HKFeatureAvailabilityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKFeatureAvailabilityDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(Class)ruleClassForRawValue:(id)arg1 ;
-(id<HKFeatureAvailabilityDataSource>)dataSource;
-(void)setDataSource:(id<HKFeatureAvailabilityDataSource>)arg1 ;
-(BOOL)evaluate;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(void)processUserInfo:(id)arg1 ;
@end

