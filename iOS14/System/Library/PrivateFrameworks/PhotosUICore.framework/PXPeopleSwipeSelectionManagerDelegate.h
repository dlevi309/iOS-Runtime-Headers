/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleSwipeSelectionManagerDelegate <NSObject>
@optional
-(id)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
-(id)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;

@required
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2;
-(id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
-(void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;

@end

