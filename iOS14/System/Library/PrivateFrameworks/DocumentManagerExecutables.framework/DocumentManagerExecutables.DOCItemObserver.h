/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <libobjc.A.dylib/FPItemCollectionIndexPathBasedDelegate.h>

@class FPItem;

@interface DocumentManagerExecutables.DOCItemObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {

	 collection;
	 item;
	 subscribers;

}

@property (retain,nonatomic) FPItem * item; 
-(id)addSubscriber:(/*^block*/id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didEncounterError:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
-(void)removeSubscriber:(id)arg1 ;
-(id)init;
-(FPItem *)item;
-(void)setItem:(FPItem *)arg1 ;
-(void)dealloc;
-(id)initWithObservedItem:(id)arg1 ;
@end

