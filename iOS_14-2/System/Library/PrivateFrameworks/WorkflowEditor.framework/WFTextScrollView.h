/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(UITextView*<WFTextField>)textView;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(id)initWithTextView:(id)arg1 ;
-(NSRange)selectedRange;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)dealloc;
-(void)textUpdated;
@end

