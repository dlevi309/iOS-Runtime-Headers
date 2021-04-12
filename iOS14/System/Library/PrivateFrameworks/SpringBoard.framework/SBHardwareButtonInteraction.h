/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHardwareButtonInteraction <NSObject>
@optional
-(BOOL)disallowsDoublePressForReason:(id*)arg1;
-(BOOL)disallowsTriplePressForReason:(id*)arg1;
-(void)observeLongPressCanceled;
-(BOOL)consumeSinglePressUp;
-(BOOL)disallowsSinglePressForReason:(id*)arg1;
-(BOOL)disallowsLongPressForReason:(id*)arg1;
-(BOOL)consumeInitialPressDown;
-(void)observeFinalPressUp;
-(BOOL)consumeLongPress;
-(BOOL)consumeInitialPressUp;
-(BOOL)consumeSecondPressDown;
-(void)observeSinglePressDidFail;
-(BOOL)consumeTriplePressUp;
-(BOOL)consumeSinglePressDown;
-(BOOL)consumeDoublePressDown;
-(BOOL)consumeDoublePressUp;

@end

