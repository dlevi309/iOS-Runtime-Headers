/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@protocol SPUITextFieldDelegate <UITextFieldDelegate>
@required
-(void)dictationButtonPressed;
-(void)returnKeyPressed;
-(void)performWebSearch;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1;
-(void)commitSearch;
-(void)switchToSuggestions;
-(void)textDidChange:(id)arg1;
-(BOOL)lastQueryKindSupportsOptionKey;
-(void)escapeKeyPressed;
-(void)enableDictationIfRequired;

@end

