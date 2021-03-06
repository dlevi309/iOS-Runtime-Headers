/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDisplayDelegate <NSObject>
@required
-(id)brailleInputManager;
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2;
-(void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
-(void)brailleDriverDisconnected:(id)arg1;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
-(void)configurationChangedForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 copyStringToClipboard:(id)arg2;
-(void)brailleDidStartEditingWithDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 didReplaceRange:(NSRange)arg2 withString:(id)arg3 cursor:(unsigned long long)arg4;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
-(void)brailleDisplay:(id)arg1 didMoveSelection:(unsigned long long)arg2;
-(void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;
-(void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;

@end

