/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDStatisticsCollectionCalculatorDataSource.h>

@class HDProfile, HKQuantityType, HDWorkoutBuilderEntity, NSString;

@interface HDWorkoutBuilderStatisticsDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {

	BOOL _enabled;
	HDProfile* _profile;
	HKQuantityType* _quantityType;
	HDWorkoutBuilderEntity* _builderEntity;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                          //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKQuantityType * quantityType;                  //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) HDWorkoutBuilderEntity * builderEntity;              //@synthesize builderEntity=_builderEntity - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(HKQuantityType *)quantityType;
-(HDProfile *)profile;
-(BOOL)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(/*^block*/id)arg4 ;
-(id)initWithProfile:(id)arg1 quantityType:(id)arg2 builderEntity:(id)arg3 ;
-(HDWorkoutBuilderEntity *)builderEntity;
@end

