/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputControllerDelegate <NSObject>
@property (nonatomic,readonly) BOOL isSingleLineDocument; 
@optional
-(void)textInputDidAnimatePaste:(id)arg1;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
-(BOOL)textInputShouldBeginEditing:(id)arg1;
-(BOOL)isSingleLineDocument;
-(void)textInputDidChangeSelection:(id)arg1;
-(void)textInputWillAnimatePaste:(id)arg1;
-(BOOL)textInputShouldExtendCaretHeight:(id)arg1;
-(NSRange*)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textInputDidChange:(id)arg1;

@end

