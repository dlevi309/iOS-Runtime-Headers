/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPCollectionDataSource.h>

@protocol FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing, FPCollectionDataSourceDelegate;
@class FPExtensionEnumerationSettings, NSObject, NSData, NSString;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource> {

	FPExtensionEnumerationSettings* _enumerationSettings;
	id<FPXEnumerator> _enumerator;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;
	BOOL _invalidated;
	BOOL _shouldUpdate;
	BOOL _enumeratingExtensionResults;
	NSData* _nextPageToken;
	NSData* _changeToken;
	unsigned long long _numGatheredItems;
	id<FPDLifetimeServicing> _lifetimeExtender;
	BOOL _hasMoreIncoming;
	id<FPCollectionDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMoreIncoming;                                          //@synthesize hasMoreIncoming=_hasMoreIncoming - In the implementation block
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(void)start;
-(void)invalidateWithError:(id)arg1 ;
-(void)_updateItems;
-(void)_invalidateWithError:(id)arg1 ;
-(void)enumerationResultsDidChange;
-(id)initWithEnumerationSettings:(id)arg1 ;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;
-(void)didUpdateItem:(id)arg1 ;
-(void)_gatherInitialItems;
-(void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(id)_initialPageFromSortDescriptors:(id)arg1 ;
-(void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2 ;
@end

