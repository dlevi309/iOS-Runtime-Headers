/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
@required
-(void)handleBrailleKeypress:(id)arg1;
-(void)handleBrailleReplaceTextRange:(NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
-(void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
-(void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
-(void)handleBrailleKeyWillMemorize:(id)arg1;
-(void)handleBrailleKeyMemorize:(id)arg1;
-(void)handleBrailleDidDisplay:(id)arg1;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1;
-(void)handleBrailleTableFailedToLoad:(id)arg1;
-(void)handleDisplayModeChanged:(id)arg1;
-(void)handleBrailleDriverDidLoad;
-(void)configurationDidChange;
-(void)handleBrailleDriverDisconnected;
-(void)handleStartEditing;
-(void)handleCopyStringToClipboard:(id)arg1;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;

@end

