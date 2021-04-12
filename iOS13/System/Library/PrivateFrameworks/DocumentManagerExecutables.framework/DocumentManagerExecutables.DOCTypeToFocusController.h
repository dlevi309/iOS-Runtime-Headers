/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIKeyInput.h>

@class UITextInputAssistantItem, UIView;

@interface DocumentManagerExecutables.DOCTypeToFocusController : UIResponder <UIKeyInput> {

	 delegate;
	 typeToFocusInputBuffer;
	 typeToFocusTimeout;
	 typeToFocusInputView;

}

@property (assign,nonatomic) long long autocorrectionType; 
@property (readonly,nonatomic) UITextInputAssistantItem * inputAssistantItem; 
@property (readonly,nonatomic) BOOL hasText; 
@property (readonly,nonatomic) UIView * inputView; 
-(id)init;
-(void)dealloc;
-(void)setAutocorrectionType:(long long)arg1 ;
-(UIView *)inputView;
-(long long)autocorrectionType;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(void)typingTimeout;
@end

