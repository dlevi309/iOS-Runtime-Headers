/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKRemoteFeatureAvailabilityDataSource;
@interface HKRemoteFeatureAvailabilityBaseRule : NSObject {

	id<HKRemoteFeatureAvailabilityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKRemoteFeatureAvailabilityDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(Class)ruleClassForRawValue:(id)arg1 ;
-(BOOL)evaluate;
-(id<HKRemoteFeatureAvailabilityDataSource>)dataSource;
-(void)setDataSource:(id<HKRemoteFeatureAvailabilityDataSource>)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(void)processUserInfo:(id)arg1 ;
@end

