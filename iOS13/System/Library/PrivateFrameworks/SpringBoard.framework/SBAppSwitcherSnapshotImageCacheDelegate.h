/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAppSwitcherSnapshotImageCacheDelegate <NSObject>
@required
-(id)appLayoutsForImageCache:(id)arg1;
-(NSRange*)visibleAppLayoutRangeForImageCache:(id)arg1;
-(BOOL)biasForwardForImageCache:(id)arg1;
-(id)highPriorityAppLayoutsForImageCache:(id)arg1;
-(long long)orientationForSnapshotOfAppLayout:(id)arg1 inImageCache:(id)arg2;
-(double)scaleForDownscaledSnapshotsForImageCache:(id)arg1;
-(id)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(id)arg1;
-(id)defaultAppLayoutsForImageCache:(id)arg1;
-(CGSize*)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 inImageCache:(id)arg4;

@end

