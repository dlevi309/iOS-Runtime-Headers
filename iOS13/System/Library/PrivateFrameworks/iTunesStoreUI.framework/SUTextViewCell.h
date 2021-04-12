/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SUTextViewCellDelegate;
@class UIScrollView, SUTextContentView, NSString;

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate> {

	id<SUTextViewCellDelegate> _delegate;
	UIScrollView* _scrollView;
	SUTextContentView* _textContentView;

}

@property (assign,nonatomic) id<SUTextViewCellDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SUTextContentView * textContentView;              //@synthesize textContentView=_textContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SUTextViewCellDelegate>)delegate;
-(void)setDelegate:(id<SUTextViewCellDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textContentViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textContentViewShouldEndEditing:(id)arg1 ;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(SUTextContentView *)textContentView;
@end

