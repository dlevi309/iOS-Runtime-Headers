/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {

	CGPoint mStartPoint;
	UIScrollView* mContainingScrollView;

}

@property (assign,nonatomic) UIScrollView * containingScrollView; 
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setContainingScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)containingScrollView;
@end

