/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol WFTextField, UITextViewDelegate;
@class UITextView, NSString;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate> {

	UITextView*<WFTextField> _textView;
	id<UITextViewDelegate> _textViewDelegate;
	NSRange _selectedRange;

}

@property (assign,nonatomic) NSRange selectedRange;                                       //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,readonly) UITextView*<WFTextField> textView;                         //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate;              //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UITextView*<WFTextField>)textView;
-(NSRange)selectedRange;
-(void)layoutSubviews;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(id)initWithTextView:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textUpdated;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
@end

