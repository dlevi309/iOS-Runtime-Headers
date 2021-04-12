/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class _TtC15HealthRecordsUI28MedicalRecordChartDataSource, NSArray, NSDate;

@interface HealthRecordsUI.MedicalRecordChartabilityResult : NSObject {

	 configuration;
	 masterDataSource;
	 seriesDataSources;
	 outOfRangeDataSource;
	 noRangeDataSource;
	??? latestChartableDate;

}

@property (readonly,nonatomic) id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> configuration; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * masterDataSource; 
@property (readonly,nonatomic) NSArray * seriesDataSources; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * outOfRangeDataSource; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * noRangeDataSource; 
@property (readonly,nonatomic) NSDate * latestChartableDate; 
@property (readonly,nonatomic) BOOL shouldProduceAtLeastOneOverlay; 
-(id)init;
-(id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_>)configuration;
-(BOOL)shouldProduceAtLeastOneOverlay;
-(NSDate *)latestChartableDate;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)masterDataSource;
-(NSArray *)seriesDataSources;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)outOfRangeDataSource;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)noRangeDataSource;
@end

