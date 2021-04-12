/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol WFTableViewFooterLinkViewDelegate;
@class NSString, NSURL, UITextView;

@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <UITextViewDelegate> {

	id<WFTableViewFooterLinkViewDelegate> _delegate;
	NSString* _text;
	NSURL* _URL;
	UITextView* _textView;
	NSRange _linkRange;

}

@property (nonatomic,readonly) UITextView * textView;                                            //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTableViewFooterLinkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSRange linkRange;                                                //@synthesize linkRange=_linkRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFTableViewFooterLinkViewDelegate>)delegate;
-(void)setDelegate:(id<WFTableViewFooterLinkViewDelegate>)arg1 ;
-(NSURL *)URL;
-(NSString *)text;
-(UITextView *)textView;
-(void)tintColorDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSRange)linkRange;
-(void)setText:(id)arg1 URL:(id)arg2 ;
-(void)setText:(id)arg1 URL:(id)arg2 linkRange:(NSRange)arg3 ;
-(void)updateLinkColor;
@end

