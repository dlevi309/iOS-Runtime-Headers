/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputControllerDelegate <NSObject>
@property (nonatomic,readonly) BOOL isSingleLineDocument; 
@optional
-(BOOL)isSingleLineDocument;
-(BOOL)textInputShouldBeginEditing:(id)arg1;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
-(void)textInputDidChange:(id)arg1;
-(NSRange*)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textInputDidChangeSelection:(id)arg1;
-(void)textInputWillAnimatePaste:(id)arg1;
-(void)textInputDidAnimatePaste:(id)arg1;

@end

