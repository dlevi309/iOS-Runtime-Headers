/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <libobjc.A.dylib/FPItemCollectionIndexPathBasedDelegate.h>

@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {

	 gatheringKeyPath;
	 serialQueue;
	 group;
	 collection;
	 finishedGathering;
	 collectionObservationContext;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
@end

