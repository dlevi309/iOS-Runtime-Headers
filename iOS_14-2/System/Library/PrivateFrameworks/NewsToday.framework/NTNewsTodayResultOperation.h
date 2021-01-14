/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NTTodayResultOperation.h>

@class NTPBTodayConfig, NSDate, NTCatchUpOperationForYouFetchInfo, NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNewsTodayResultOperation : NTTodayResultOperation {

	NTPBTodayConfig* _todayConfig;
	NSDate* _filterDate;
	NTCatchUpOperationForYouFetchInfo* _forYouFetchInfo;
	double _resultHeadlineScaleFactor;
	NTTodayResults* _resultTodayResults;
	NSDictionary* _resultAssetHandlesByAssetID;
	NTPBTodayResultOperationFetchInfo* _resultFetchInfo;

}

@property (nonatomic,copy) NTPBTodayConfig * todayConfig;                                    //@synthesize todayConfig=_todayConfig - In the implementation block
@property (nonatomic,copy) NSDate * filterDate;                                              //@synthesize filterDate=_filterDate - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouFetchInfo * forYouFetchInfo;              //@synthesize forYouFetchInfo=_forYouFetchInfo - In the implementation block
@property (assign,nonatomic) double resultHeadlineScaleFactor;                               //@synthesize resultHeadlineScaleFactor=_resultHeadlineScaleFactor - In the implementation block
@property (nonatomic,copy) NTTodayResults * resultTodayResults;                              //@synthesize resultTodayResults=_resultTodayResults - In the implementation block
@property (nonatomic,copy) NSDictionary * resultAssetHandlesByAssetID;                       //@synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationFetchInfo * resultFetchInfo;              //@synthesize resultFetchInfo=_resultFetchInfo - In the implementation block
+(void)initialize;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(id)init;
-(NTCatchUpOperationForYouFetchInfo *)forYouFetchInfo;
-(void)setForYouFetchInfo:(NTCatchUpOperationForYouFetchInfo *)arg1 ;
-(void)setResultTodayResults:(NTTodayResults *)arg1 ;
-(void)setResultAssetHandlesByAssetID:(NSDictionary *)arg1 ;
-(void)setResultFetchInfo:(NTPBTodayResultOperationFetchInfo *)arg1 ;
-(NTTodayResults *)resultTodayResults;
-(NSDictionary *)resultAssetHandlesByAssetID;
-(NTPBTodayResultOperationFetchInfo *)resultFetchInfo;
-(void)setTodayConfig:(NTPBTodayConfig *)arg1 ;
-(NTPBTodayConfig *)todayConfig;
-(id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3 ;
-(void)_fetchTodayResultsWithFetchHelper:(id)arg1 aggregator:(id)arg2 budgetInfo:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(BOOL)arg2 respectsWidgetVisibleSectionsLimit:(BOOL)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_registerForYouFetchWithForYouFetchInfo:(id)arg1 ;
-(void)setResultHeadlineScaleFactor:(double)arg1 ;
-(void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(/*^block*/id)arg7 ;
-(double)resultHeadlineScaleFactor;
-(BOOL)_useForegroundMinimumUpdateInterval;
-(NSDate *)filterDate;
-(void)setFilterDate:(NSDate *)arg1 ;
@end
