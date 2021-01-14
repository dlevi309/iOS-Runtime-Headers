/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

