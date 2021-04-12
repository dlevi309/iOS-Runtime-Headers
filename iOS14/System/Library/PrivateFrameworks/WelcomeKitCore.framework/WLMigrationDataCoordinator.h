/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol WLMigrationDataCoordinatorDelegate;
@class NSString;

@interface WLMigrationDataCoordinator : NSObject {

	BOOL _doneSent;
	BOOL _stashDataLocally;
	id<WLMigrationDataCoordinatorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<WLMigrationDataCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL stashDataLocally;                                                 //@synthesize stashDataLocally=_stashDataLocally - In the implementation block
@property (nonatomic,readonly) NSString * downloadsPath; 
@property (nonatomic,readonly) NSString * safeHarborsPath; 
+(unsigned long long)downloadSegmentSize;
+(BOOL)_allowSegmentedDownloads;
+(unsigned long long)segmentCountForItemSize:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2 ;
-(id<WLMigrationDataCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setStashDataLocally:(BOOL)arg1 ;
-(void)_fetchSummariesFromSource:(id)arg1 forMigrator:(id)arg2 account:(id)arg3 statistics:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_fetchAccountsFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_recordSummaryForMigrator:(id)arg1 withInfo:(id)arg2 account:(id)arg3 ;
-(void)_downloadFileInMultipleSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 itemSize:(unsigned long long)arg5 segmentCompletion:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)stashDataLocally;
-(void)_downloadSegmentsFromSource:(id)arg1 forMigrator:(id)arg2 startingAtByteLocation:(unsigned long long)arg3 ofSummary:(id)arg4 account:(id)arg5 itemSize:(unsigned long long)arg6 toFileHandle:(id)arg7 segmentCompletion:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(NSString *)downloadsPath;
-(id)databasePathForSQLController:(id)arg1 ;
-(NSString *)safeHarborsPath;
-(void)fetchAccountsAndSummariesFromSource:(id)arg1 forMigrator:(id)arg2 statistics:(id)arg3 accountsRequestDurationBlock:(/*^block*/id)arg4 summariesRequestDurationBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)downloadFileFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 segmentCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)downloadDataFromSource:(id)arg1 forMigrator:(id)arg2 summary:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)importDataForMigrator:(id)arg1 fromProvider:(/*^block*/id)arg2 forSummaries:(id)arg3 summaryStart:(/*^block*/id)arg4 summaryCompletion:(/*^block*/id)arg5 ;
-(void)updateSource:(id)arg1 withProgress:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

