/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPAVItem, NSArray;


@protocol MPAVQueueCoordinating <NSObject>
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1;
-(NSArray *)items;
-(void)setShouldDeferItemLoading:(BOOL)arg1;
-(BOOL)shouldDeferItemLoading;
-(MPAVItem *)currentItem;
-(void)reset;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1;

@end

