/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@protocol AEMessagesShelfLayoutDelegate <NSObject>
@required
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsVideo:(PXSimpleIndexPath)arg2;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsLoop:(PXSimpleIndexPath)arg2;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsAnimatedImage:(PXSimpleIndexPath)arg2;
-(double)layout:(id)arg1 itemAtIndexPathDuration:(PXSimpleIndexPath)arg2;
-(BOOL)layoutShouldShowVideoDuration:(id)arg1;

@end

