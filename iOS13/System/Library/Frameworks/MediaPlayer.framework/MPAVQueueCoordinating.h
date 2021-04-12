/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class MPAVItem, NSArray;


@protocol MPAVQueueCoordinating <NSObject>
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(void)reset;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1;
-(BOOL)shouldDeferItemLoading;
-(void)setShouldDeferItemLoading:(BOOL)arg1;

@end

