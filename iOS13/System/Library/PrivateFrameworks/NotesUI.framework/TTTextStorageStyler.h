/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol TTTextStorageStyler <NSObject>
@optional
-(void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4;

@required
-(id)styleForModelAttributes:(id)arg1;
-(id)modelForStyleAttributes:(id)arg1 filterAttributes:(BOOL)arg2;
-(void)styleText:(id)arg1 inRange:(NSRange)arg2 fixModelAttributes:(BOOL)arg3;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
-(void)resetGuessedFontSizes;

@end

