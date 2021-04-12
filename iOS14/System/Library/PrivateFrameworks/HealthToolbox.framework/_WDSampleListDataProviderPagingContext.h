/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSDate, HKQuery;

@interface _WDSampleListDataProviderPagingContext : NSObject {

	BOOL _requiresPaging;
	BOOL _fetchingData;
	NSDate* _earliestProcessedSampleDate;
	HKQuery* _currentQuery;
	NSDate* _fetchUntilDate;

}

@property (assign,nonatomic) BOOL requiresPaging;                                  //@synthesize requiresPaging=_requiresPaging - In the implementation block
@property (assign,getter=isFetchingData,nonatomic) BOOL fetchingData;              //@synthesize fetchingData=_fetchingData - In the implementation block
@property (nonatomic,retain) NSDate * earliestProcessedSampleDate;                 //@synthesize earliestProcessedSampleDate=_earliestProcessedSampleDate - In the implementation block
@property (nonatomic,retain) HKQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,retain) NSDate * fetchUntilDate;                              //@synthesize fetchUntilDate=_fetchUntilDate - In the implementation block
-(HKQuery *)currentQuery;
-(void)setCurrentQuery:(HKQuery *)arg1 ;
-(BOOL)isFetchingData;
-(BOOL)requiresPaging;
-(void)setFetchUntilDate:(NSDate *)arg1 ;
-(void)setRequiresPaging:(BOOL)arg1 ;
-(NSDate *)earliestProcessedSampleDate;
-(NSDate *)fetchUntilDate;
-(void)setFetchingData:(BOOL)arg1 ;
-(void)setEarliestProcessedSampleDate:(NSDate *)arg1 ;
@end

