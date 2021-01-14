/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@interface SBPowerDownView : SBUIPowerDownView

@property (assign,nonatomic,__weak) id<SBPowerDownViewDelegate> powerDownDelegate; 
-(id<SBPowerDownViewDelegate>)powerDownDelegate;
-(void)setPowerDownDelegate:(id<SBPowerDownViewDelegate>)arg1 ;
-(void)_idleTimerFired;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1 ;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidCancelSlide;
-(void)_cancelButtonTapped;
@end

