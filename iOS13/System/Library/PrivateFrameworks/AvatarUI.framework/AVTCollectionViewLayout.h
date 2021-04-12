/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTCollectionViewLayout
@required
-(CGRect*)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3;
-(CGPoint*)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3;
-(CGSize*)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2;
-(CGRect*)initialFrameForAppearingElementAtOriginForVisibleBounds:(CGRect)arg1;
-(CGRect*)finalFrameForDisappearingElementAtOriginForVisibleBounds:(CGRect)arg1;

@end

