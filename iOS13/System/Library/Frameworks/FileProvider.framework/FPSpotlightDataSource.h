/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPSpotlightCollectorObserving.h>
#import <libobjc.A.dylib/FPCollectionDataSource.h>

@protocol OS_dispatch_queue, FPSpotlightDataSourceDelegate;
@class NSObject, FPSpotlightCollectorManager, FPQueryEnumerationSettings, NSPredicate, FPSpotlightQueryDescriptor, NSString;

@interface FPSpotlightDataSource : NSObject <FPSpotlightCollectorObserving, FPCollectionDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	FPSpotlightCollectorManager* _collectorManager;
	FPQueryEnumerationSettings* _enumerationSettings;
	NSPredicate* _predicate;
	BOOL _invalidated;
	BOOL _hasMoreIncoming;
	id<FPSpotlightDataSourceDelegate> _delegate;
	FPSpotlightQueryDescriptor* _queryDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FPSpotlightQueryDescriptor * queryDescriptor;                 //@synthesize queryDescriptor=_queryDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<FPSpotlightDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreIncoming;                                         //@synthesize hasMoreIncoming=_hasMoreIncoming - In the implementation block
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(id<FPSpotlightDataSourceDelegate>)delegate;
-(void)setDelegate:(id<FPSpotlightDataSourceDelegate>)arg1 ;
-(void)start;
-(void)_invalidateWithError:(id)arg1 ;
-(FPSpotlightQueryDescriptor *)queryDescriptor;
-(id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2 ;
-(void)collector:(id)arg1 didGatherItems:(id)arg2 ;
-(id)itemPredicateForCollector:(id)arg1 ;
-(unsigned long long)maximumNumberOfItemsForCollector:(id)arg1 ;
-(void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2 ;
-(void)collector:(id)arg1 didRemoveItemIDs:(id)arg2 ;
-(void)collector:(id)arg1 didUpdateItems:(id)arg2 ;
-(void)collector:(id)arg1 didEncounterError:(id)arg2 ;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;
@end

