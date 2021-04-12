/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@protocol _TtP15HealthRecordsUI31MedicalRecordChartConfiguration_;
@class HKConcept, NSArray, _TtC15HealthRecordsUI28MedicalRecordChartDataSource;

@interface HROverlayRoomViewController : HKOverlayRoomViewController {

	BOOL _hasChart;
	HKConcept* _concept;
	id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> _configuration;
	NSArray* _displayTypes;
	_TtC15HealthRecordsUI28MedicalRecordChartDataSource* _masterDataSource;
	NSArray* _seriesDataSources;
	_TtC15HealthRecordsUI28MedicalRecordChartDataSource* _outOfRangeDataSource;
	_TtC15HealthRecordsUI28MedicalRecordChartDataSource* _noRangeDataSource;

}

@property (nonatomic,retain) HKConcept * concept;                                                                     //@synthesize concept=_concept - In the implementation block
@property (nonatomic,retain) id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSArray * displayTypes;                                                                    //@synthesize displayTypes=_displayTypes - In the implementation block
@property (nonatomic,retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * masterDataSource;                  //@synthesize masterDataSource=_masterDataSource - In the implementation block
@property (nonatomic,copy) NSArray * seriesDataSources;                                                               //@synthesize seriesDataSources=_seriesDataSources - In the implementation block
@property (nonatomic,retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * outOfRangeDataSource;              //@synthesize outOfRangeDataSource=_outOfRangeDataSource - In the implementation block
@property (nonatomic,retain) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * noRangeDataSource;                 //@synthesize noRangeDataSource=_noRangeDataSource - In the implementation block
@property (nonatomic,readonly) BOOL hasChart;                                                                         //@synthesize hasChart=_hasChart - In the implementation block
+(id)_verticalAxis;
+(void)determineChartabilityOfConcept:(id)arg1 withApplicationItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HKConcept *)concept;
-(id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_>)configuration;
-(void)setConcept:(HKConcept *)arg1 ;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)masterDataSource;
-(NSArray *)seriesDataSources;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)outOfRangeDataSource;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)noRangeDataSource;
-(id)initWithConcept:(id)arg1 configuration:(id)arg2 displayDate:(id)arg3 masterDataSource:(id)arg4 seriesDataSources:(id)arg5 outOfRangeDataSource:(id)arg6 noRangeDataSource:(id)arg7 overlayMode:(long long)arg8 applicationItems:(id)arg9 ;
-(NSArray *)displayTypes;
-(BOOL)supportsShowAllFilters;
-(id)createChartOverlayViewController;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(void)setDisplayTypes:(NSArray *)arg1 ;
-(void)setMasterDataSource:(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)arg1 ;
-(void)setSeriesDataSources:(NSArray *)arg1 ;
-(void)setOutOfRangeDataSource:(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)arg1 ;
-(void)setNoRangeDataSource:(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)arg1 ;
-(BOOL)hasChart;
-(void)setConfiguration:(id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_>)arg1 ;
@end

