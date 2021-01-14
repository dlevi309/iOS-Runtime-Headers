/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIView.h>

@protocol ICInkToolPickerResponderDelegate;
@interface ICInkToolPickerResponder : UIView {

	id<ICInkToolPickerResponderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICInkToolPickerResponderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICInkToolPickerResponderDelegate>)delegate;
-(id)inputAssistantItem;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<ICInkToolPickerResponderDelegate>)arg1 ;
@end

