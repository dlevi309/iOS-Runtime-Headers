/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasText;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)autocorrectionType;
-(id)init;
-(UITextInputAssistantItem *)inputAssistantItem;
-(UIView *)inputView;
-(void)dealloc;
-(void)typingTimeout;
@end

