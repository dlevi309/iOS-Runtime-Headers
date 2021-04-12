/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

