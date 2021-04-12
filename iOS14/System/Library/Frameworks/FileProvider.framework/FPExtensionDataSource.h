/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)enumerationResultsDidChange;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)start;
-(id)initWithEnumerationSettings:(id)arg1 ;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(BOOL)hasMoreIncoming;
-(NSString *)description;
-(void)enumerationMightHaveResumed;
-(void)didUpdateItem:(id)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)_gatherInitialItems;
-(void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(id)_initialPageFromSortDescriptors:(id)arg1 ;
-(void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2 ;
-(void)_updateItems;
-(void)invalidate;
-(void)_invalidateWithError:(id)arg1 ;
@end

