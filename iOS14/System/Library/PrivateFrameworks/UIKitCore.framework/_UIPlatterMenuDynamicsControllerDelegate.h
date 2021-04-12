/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

