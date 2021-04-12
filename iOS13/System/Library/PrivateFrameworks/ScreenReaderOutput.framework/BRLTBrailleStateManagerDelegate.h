/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol BRLTBrailleStateManagerDelegate <NSObject>
@required
-(void)brailleDisplayInsertedCharacter:(id)arg1;
-(void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2;
-(void)brailleDisplayDeletedCharacter:(id)arg1;
-(void)scriptSelectionDidChange:(NSRange)arg1;
-(void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
-(void)didInsertScriptString:(id)arg1;

@end

