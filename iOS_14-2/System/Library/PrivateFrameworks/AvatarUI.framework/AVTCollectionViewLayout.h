/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTCollectionViewLayout
@required
-(CGPoint*)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3;
-(CGSize*)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2;
-(CGRect*)initialFrameForAppearingElementAtOriginForVisibleBounds:(CGRect)arg1;
-(CGRect*)finalFrameForDisappearingElementAtOriginForVisibleBounds:(CGRect)arg1;
-(CGRect*)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3;

@end

