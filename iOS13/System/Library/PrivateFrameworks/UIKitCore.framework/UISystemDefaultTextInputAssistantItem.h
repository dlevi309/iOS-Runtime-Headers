/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextInputAssistantItem.h>

@protocol UISystemDefaultTextInputAssistantItemDelegate;
@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem {

	id<UISystemDefaultTextInputAssistantItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UISystemDefaultTextInputAssistantItemDelegate>)delegate;
-(void)setDelegate:(id<UISystemDefaultTextInputAssistantItemDelegate>)arg1 ;
-(void)assistantCut;
-(void)assistantCopy;
-(void)assistantUndo;
-(void)assistantRedo;
-(void)assistantPaste;
-(void)assistantBold;
-(void)assistantItalic;
-(void)assistantUnderline;
-(void)assistantDismiss;
-(void)assistantShowKeyboard;
-(void)assistantWriteboard;
-(void)performSystemButtonActionForStyle:(long long)arg1 ;
-(SEL)_responderSelectorForSystemButtonStyle:(long long)arg1 ;
-(BOOL)canPerformSystemButtonActionForStyle:(long long)arg1 ;
-(void)analyticsDispatchWithActionStyle:(long long)arg1 ;
-(void)_performReturn;
@end

