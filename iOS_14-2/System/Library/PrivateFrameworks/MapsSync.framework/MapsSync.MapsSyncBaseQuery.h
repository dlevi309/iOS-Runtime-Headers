/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncGenericQueryDelegate.h>
#import <MapsSync/MapsSync.MapsSyncFetchedResultsChangeDelegate.h>
#import <MapsSync/MapsSync.MapsSyncGenericQueryMergeDelegate.h>

@class NSPredicate, _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate;

@interface MapsSync.MapsSyncBaseQuery : NSObject <MapsSync.MapsSyncGenericQueryDelegate, MapsSync.MapsSyncFetchedResultsChangeDelegate, MapsSync.MapsSyncGenericQueryMergeDelegate> {

	 mergeDelegate;
	 genericQuery;
	 delegate;
	 predicate;
	 mapsSyncFetchedResultsControllerDelegate;
	 _historyToken;
	 _tokenLock;
	 _didChangeDebouncer;
	 _isInitCompleteLock;
	 _isInitComplete;

}

@property (assign,__weak,nonatomic) id<_TtP8MapsSync30MapsSyncDataQueryMergeDelegate_> mergeDelegate; 
@property (retain,nonatomic) id<_TtP8MapsSync21MapsSyncQueryProtocol_> genericQuery; 
@property (assign,__weak,nonatomic) id<_TtP8MapsSync25MapsSyncDataQueryDelegate_> delegate; 
@property (retain,nonatomic) NSPredicate * predicate; 
@property (retain,nonatomic) _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate * mapsSyncFetchedResultsControllerDelegate; 
+(id)signpostLog;
-(NSPredicate *)predicate;
-(id)init;
-(id<_TtP8MapsSync25MapsSyncDataQueryDelegate_>)delegate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)initWithQueryDelegate:(id)arg1 predicate:(id)arg2 ;
-(void)setDelegate:(id<_TtP8MapsSync25MapsSyncDataQueryDelegate_>)arg1 ;
-(BOOL)isReady;
-(void)queryIsReady;
-(void)queryContentsDidChangeWithNotification:(id)arg1 ;
-(void)queryContextDidChangeWithNotification:(id)arg1 ;
-(void)queryStoreDidChangeWithNotification:(id)arg1 ;
-(void)queryContentsWillChangeWithNotification:(id)arg1 ;
-(void)queryContentsDidChangeObjectWithNotification:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)queryContentsDidLoadWithNotification:(id)arg1 ;
-(id)mergeDuplicateObjectsWithDuplicates:(id)arg1 ;
-(void)fetchedResultsDidChangeWithControllerDelegate:(id)arg1 ;
-(void)fetchedResultsWillChangeWithControllerDelegate:(id)arg1 ;
-(void)fetchedResultsDidChangeObjectWithControllerDelegate:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)reloadContentsWithCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)deleteAllObjectsWithCompletion:(/*^block*/id)arg1 ;
-(id<_TtP8MapsSync21MapsSyncQueryProtocol_>)genericQuery;
-(void)setMergeDelegate:(id<_TtP8MapsSync30MapsSyncDataQueryMergeDelegate_>)arg1 ;
-(void)setGenericQuery:(id<_TtP8MapsSync21MapsSyncQueryProtocol_>)arg1 ;
-(_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *)mapsSyncFetchedResultsControllerDelegate;
-(void)setMapsSyncFetchedResultsControllerDelegate:(_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *)arg1 ;
-(void)completeInit;
-(BOOL)isInitComplete;
-(void)fetchBaseContents:(/*^block*/id)arg1 ;
-(void)fetchBaseContentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchQueryBaseContents:(/*^block*/id)arg1 ;
-(void)fetchQueryBaseContentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)watchItemsMatchingPredicate:(id)arg1 ;
-(id)findDuplicates:(id)arg1 ;
-(void)preFetchHook:(/*^block*/id)arg1 ;
-(id<_TtP8MapsSync30MapsSyncDataQueryMergeDelegate_>)mergeDelegate;
@end

