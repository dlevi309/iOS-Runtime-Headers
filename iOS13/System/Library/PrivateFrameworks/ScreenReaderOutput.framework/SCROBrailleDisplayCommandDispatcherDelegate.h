/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>
@required
-(void)handleCommandPanLeftForDispatcher:(id)arg1;
-(void)handleCommandPanRightForDispatcher:(id)arg1;
-(void)handleCommandMoveLeftForDispatcher:(id)arg1;
-(void)handleCommandMoveRightForDispatcher:(id)arg1;
-(void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandForwardDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandEscapeKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandTranslateForDispatcher:(id)arg1;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(id)brailleInputManager;

@end

