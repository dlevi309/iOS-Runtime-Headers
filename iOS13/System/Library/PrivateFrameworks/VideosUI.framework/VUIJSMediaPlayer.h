/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIOrderedItemsMapDelegate.h>
#import <libobjc.A.dylib/VUIJSMediaPlayerLibraryExport.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, MPUQueryDataSource, VUIOrderedItemsMap, NSString;

@interface VUIJSMediaPlayer : IKJSObject <VUIOrderedItemsMapDelegate, VUIJSMediaPlayerLibraryExport> {

	NSOperationQueue* _artworkLoadingQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _workQueue;
	MPUQueryDataSource* _queryDataSource;
	VUIOrderedItemsMap* _orderedItemsMap;
	NSOperationQueue* _fetchOperationQueue;
	NSOperationQueue* _fetchCompletionOperationQueue;

}

@property (nonatomic,retain) MPUQueryDataSource * queryDataSource;                          //@synthesize queryDataSource=_queryDataSource - In the implementation block
@property (nonatomic,retain) VUIOrderedItemsMap * orderedItemsMap;                          //@synthesize orderedItemsMap=_orderedItemsMap - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchOperationQueue;                        //@synthesize fetchOperationQueue=_fetchOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchCompletionOperationQueue;              //@synthesize fetchCompletionOperationQueue=_fetchCompletionOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_logObject;
-(BOOL)setFilter:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)getItems;
-(long long)_dataSourceType;
-(MPUQueryDataSource *)queryDataSource;
-(id)_mediaItemForIdentifier:(id)arg1 ;
-(void)setFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)fetchOperationQueue;
-(id)_numberForString:(id)arg1 ;
-(id)_stringForNumber:(id)arg1 ;
-(void)_onIsUpdateInProgressChangedNotification:(id)arg1 ;
-(void)_onSyncGenerationChangedNotification:(id)arg1 ;
-(void)_mediaLibraryChanged:(id)arg1 ;
-(VUIOrderedItemsMap *)orderedItemsMap;
-(void)_dataSourceWillChange;
-(void)_dataSourceChanged:(id)arg1 ;
-(void)_dataSourceDidChange;
-(id)_getItem:(id)arg1 includeChildren:(BOOL)arg2 additionalProperties:(id)arg3 ;
-(id)_dataSourceForConfigurationOptions:(id)arg1 ;
-(void)setQueryDataSource:(MPUQueryDataSource *)arg1 ;
-(NSOperationQueue *)fetchCompletionOperationQueue;
-(id)_dateFromConfigurationObject:(id)arg1 ;
-(id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2 ;
-(void)itemsMapAddedKeys:(id)arg1 andRemovedKeys:(id)arg2 ;
-(id)findItemByPersistentIdentifier:(id)arg1 :(id)arg2 ;
-(id)findItemByStoreIdentifier:(id)arg1 :(id)arg2 ;
-(BOOL)getIsUpdateInProgress;
-(BOOL)getIsInitialImport;
-(void)getImageForItem:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)getItem:(id)arg1 :(id)arg2 ;
-(unsigned long long)getItemCount;
-(id)getShowIdentifierForStoreIdentifier:(id)arg1 ;
-(id)getItemWithChildren:(id)arg1 :(id)arg2 ;
-(void)getUpdateProgress:(id)arg1 ;
-(BOOL)libraryHasMedia;
-(void)setFilterAsync:(id)arg1 :(id)arg2 ;
-(long long)queryHasItemCount:(id)arg1 ;
-(void)fetchMediaEntitiesWithOptions:(id)arg1 :(id)arg2 ;
-(BOOL)isHDRCapable;
-(void)setOrderedItemsMap:(VUIOrderedItemsMap *)arg1 ;
-(void)setFetchCompletionOperationQueue:(NSOperationQueue *)arg1 ;
@end

