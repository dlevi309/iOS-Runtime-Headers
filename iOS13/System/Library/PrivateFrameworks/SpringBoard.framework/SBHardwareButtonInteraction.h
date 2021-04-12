/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBHardwareButtonInteraction <NSObject>
@optional
-(void)observeFinalPressUp;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeInitialPressUp;
-(BOOL)consumeSecondPressDown;
-(BOOL)consumeLongPress;
-(void)observeSinglePressDidFail;
-(BOOL)consumeSinglePressUp;
-(BOOL)consumeTriplePressUp;
-(void)observeLongPressCanceled;
-(BOOL)disallowsSinglePressForReason:(id*)arg1;
-(BOOL)disallowsDoublePressForReason:(id*)arg1;
-(BOOL)disallowsTriplePressForReason:(id*)arg1;
-(BOOL)disallowsLongPressForReason:(id*)arg1;
-(BOOL)consumeSinglePressDown;
-(BOOL)consumeDoublePressDown;
-(BOOL)consumeDoublePressUp;

@end

