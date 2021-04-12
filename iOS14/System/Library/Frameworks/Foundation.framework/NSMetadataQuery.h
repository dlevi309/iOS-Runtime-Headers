/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSPredicate, NSArray, NSOperationQueue, NSDictionary;

@interface NSMetadataQuery : NSObject {

	unsigned long long _flags;
	double _interval;
	id _private[11];
	void* _reserved;

}

@property (assign) id<NSMetadataQueryDelegate> delegate; 
@property (copy) NSPredicate * predicate; 
@property (copy) NSArray * sortDescriptors; 
@property (copy) NSArray * valueListAttributes; 
@property (copy) NSArray * groupingAttributes; 
@property (assign) double notificationBatchingInterval; 
@property (copy) NSArray * searchScopes; 
@property (copy) NSArray * searchItems; 
@property (retain) NSOperationQueue * operationQueue; 
@property (getter=isStarted,readonly) BOOL started; 
@property (getter=isGathering,readonly) BOOL gathering; 
@property (getter=isStopped,readonly) BOOL stopped; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) NSDictionary * valueLists; 
@property (copy,readonly) NSArray * groupedResults; 
+(Class)_stitchingClass;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)didEndPossibleFileOperation:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)results;
-(NSOperationQueue *)operationQueue;
-(unsigned long long)resultCount;
-(NSPredicate *)predicate;
-(id)init;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2 ;
-(BOOL)isStarted;
-(id<NSMetadataQueryDelegate>)delegate;
-(BOOL)_canModifyQueryOrObserversInCurrentContext;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_externalDocumentsBundleIdentifier;
-(id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2 ;
-(void)setNotificationBatchingInterval:(double)arg1 ;
-(BOOL)isStopped;
-(NSArray *)searchItems;
-(void)_noteNote1:(id)arg1 ;
-(void)_noteNote2:(id)arg1 ;
-(void)_noteNote3:(id)arg1 ;
-(void)_setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(void)_noteNote4:(id)arg1 ;
-(void)_noteNote5:(id)arg1 ;
-(BOOL)isGathering;
-(BOOL)startQuery;
-(NSDictionary *)valueLists;
-(BOOL)_isMDQuery;
-(void)stopQuery;
-(NSArray *)searchScopes;
-(void)_validatePredicate:(id)arg1 withScopes:(id)arg2 ;
-(void)_inOriginalContextInvokeBlock:(/*^block*/id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)enableUpdates;
-(double)notificationBatchingInterval;
-(void)_zapResultArrayIfIdenticalTo:(id)arg1 ;
-(void)setDelegate:(id<NSMetadataQueryDelegate>)arg1 ;
-(void)_recreateQuery;
-(void)disableUpdates;
-(void)enumerateResultsUsingBlock:(/*^block*/id)arg1 ;
-(id)_allAttributes;
-(id)searchItemURLs;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(NSArray *)groupedResults;
-(void)setSearchItems:(NSArray *)arg1 ;
-(void)_validateInvocationContext;
-(void)_resetQueryState;
-(void)setSearchScopes:(NSArray *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setGroupingAttributes:(NSArray *)arg1 ;
-(NSArray *)valueListAttributes;
-(void)_disableAutoUpdates;
-(NSArray *)groupingAttributes;
-(id)_sortingAttributes;
-(void)_setBatchingParams;
-(void)_enableAutoUpdates;
-(void)setSearchItemURLs:(id)arg1 ;
-(void)setValueListAttributes:(NSArray *)arg1 ;
-(void)_update;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(id)_queryString;
-(void)dealloc;
@end

