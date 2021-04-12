/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSMutableSet, NSMutableArray;

@interface WDMedicalRecordPagingContext : NSObject {

	BOOL _shouldClearDisplayItemGroups;
	BOOL _hasMoreData;
	BOOL _fetchingCurrentPage;
	BOOL _pagingContextReady;
	NSMutableSet* _computingDaySummaries;
	NSMutableArray* _unprocessedRecords;
	NSMutableArray* _contextDependentBlockQueue;
	NSMutableArray* _removedRecords;

}

@property (assign,nonatomic) BOOL shouldClearDisplayItemGroups;                        //@synthesize shouldClearDisplayItemGroups=_shouldClearDisplayItemGroups - In the implementation block
@property (assign,nonatomic) BOOL hasMoreData;                                         //@synthesize hasMoreData=_hasMoreData - In the implementation block
@property (assign,nonatomic) BOOL fetchingCurrentPage;                                 //@synthesize fetchingCurrentPage=_fetchingCurrentPage - In the implementation block
@property (assign,nonatomic) BOOL pagingContextReady;                                  //@synthesize pagingContextReady=_pagingContextReady - In the implementation block
@property (nonatomic,retain) NSMutableSet * computingDaySummaries;                     //@synthesize computingDaySummaries=_computingDaySummaries - In the implementation block
@property (nonatomic,retain) NSMutableArray * unprocessedRecords;                      //@synthesize unprocessedRecords=_unprocessedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * contextDependentBlockQueue;              //@synthesize contextDependentBlockQueue=_contextDependentBlockQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedRecords;                          //@synthesize removedRecords=_removedRecords - In the implementation block
+(id)sortDateComponentsOfDate:(id)arg1 ;
+(id)sortDateComponentsOfDateComponents:(id)arg1 withDayOffset:(long long)arg2 ;
-(id)init;
-(BOOL)hasMoreData;
-(NSMutableArray *)removedRecords;
-(void)resetPagingContext;
-(BOOL)fetchingCurrentPage;
-(BOOL)pagingContextReady;
-(BOOL)shouldQueryForNextBatch;
-(BOOL)shouldClearDisplayItemGroups;
-(void)setShouldClearDisplayItemGroups:(BOOL)arg1 ;
-(void)setHasMoreData:(BOOL)arg1 ;
-(void)setFetchingCurrentPage:(BOOL)arg1 ;
-(void)setPagingContextReady:(BOOL)arg1 ;
-(NSMutableSet *)computingDaySummaries;
-(void)setComputingDaySummaries:(NSMutableSet *)arg1 ;
-(NSMutableArray *)unprocessedRecords;
-(void)setUnprocessedRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contextDependentBlockQueue;
-(void)setContextDependentBlockQueue:(NSMutableArray *)arg1 ;
-(void)setRemovedRecords:(NSMutableArray *)arg1 ;
@end

