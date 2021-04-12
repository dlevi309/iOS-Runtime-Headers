/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPersistentHistoryUtilities : NSObject
+(id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2 ;
+(long long)fetchApproximateHistoryRecordCountInLibrary:(id)arg1 error:(id*)arg2 ;
+(BOOL)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
@end

