/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBTetheredSwitcherContentViewControlling <NSObject>
@property (nonatomic,readonly) id<SBTetheredSwitcherContentViewControlling> tetheredViewController; 
@required
-(CGSize*)contentSize;
-(BOOL)isScrolling;
-(unsigned long long)numberOfAppLayouts;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
-(void)setTetheredContentView:(id)arg1;
-(void)tetheredViewController:(id)arg1 didPerformTransitionWithMode:(long long)arg2;
-(void)setTetheredScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToReopenClosedWindowsWithCompletion:(/*^block*/id)arg1;
-(BOOL)hasItemContainerAtLocationInContentView:(CGPoint)arg1;
-(void)beginTetheringWithViewController:(id)arg1 asTetheree:(BOOL)arg2;
-(void)endTetheringWithViewController:(id)arg1;
-(void)dispatchAndHandleTetheredRemovalEvent:(id)arg1;
-(id)borrowScrollViewPanGestureRecognizer;
-(void)returnScrollViewPanGestureRecognizer:(id)arg1;
-(id<SBTetheredSwitcherContentViewControlling>)tetheredViewController;

@end

