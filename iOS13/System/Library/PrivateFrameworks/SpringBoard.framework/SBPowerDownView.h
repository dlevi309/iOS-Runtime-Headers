/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@interface SBPowerDownView : SBUIPowerDownView

@property (assign,nonatomic,__weak) id<SBPowerDownViewDelegate> powerDownDelegate; 
-(void)_idleTimerFired;
-(void)_cancelButtonTapped;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1 ;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidCancelSlide;
-(id<SBPowerDownViewDelegate>)powerDownDelegate;
-(void)setPowerDownDelegate:(id<SBPowerDownViewDelegate>)arg1 ;
@end

