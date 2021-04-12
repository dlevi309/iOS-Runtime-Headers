/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerReorderItemsCommand <MPCPlayerCommand>
@required
-(id)moveItem:(id)arg1 afterItem:(id)arg2;
-(id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
-(id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
-(BOOL)canMoveItem:(id)arg1;
-(id)moveItem:(id)arg1 beforeItem:(id)arg2;

@end

