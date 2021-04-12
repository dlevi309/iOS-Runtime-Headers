/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>
@optional
-(void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1;

@required
-(CGPoint*)centerForPlatterWithMenuViewDismissed;
-(CGPoint*)centerForMenuDismissed;
-(CGPoint*)centerForPlatterWithMenuViewPresented;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGPoint*)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(CGPoint*)initialCenterForLeadingSwipeActionView;
-(CGPoint*)initialCenterForTrailingSwipeActionView;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3;

@end

