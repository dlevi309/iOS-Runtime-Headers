/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@interface TeaUI.SwipeActionManager : NSObject <UIGestureRecognizerDelegate> {

	 panGestureRecognizer;
	 tapGestureRecognizer;
	 deferGroup;
	 collectionView;
	 isSwipeActionEnabled;
	 dataSource;
	 delegate;
	 rubberbandFactor;
	 maximumSwipeVelocity;
	 springStiffness;
	 snapOpenPercentage;
	 fadeDuration;
	 fadeOffset;

}
-(id)init;
-(void)handlePanGestureWithRecognizer:(id)arg1 ;
-(void)handleTapGestureWithRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

