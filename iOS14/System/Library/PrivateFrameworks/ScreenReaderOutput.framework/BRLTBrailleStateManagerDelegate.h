/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

