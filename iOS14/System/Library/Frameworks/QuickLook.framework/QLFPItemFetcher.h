/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLUbiquitousItemFetcher.h>
#import <libobjc.A.dylib/FPItemCollectionDelegate.h>

@class FPItem, QLURLHandler, FPItemCollection, NSString;

@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate> {

	FPItem* _fpItem;
	QLURLHandler* _fetchedURLHandler;
	FPItemCollection* _itemCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)itemSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fileURL;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)shareableItem;
-(void)_registerItemCollectionIfNeeded;
-(void)_unregisterItemCollectionIfNeeded;
-(void)_urlHandler:(/*^block*/id)arg1 ;
-(id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(void)dealloc;
@end

