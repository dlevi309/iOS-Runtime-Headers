/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)resignFirstResponder;
-(id<SUTextViewCellDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SUTextViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)textContentViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textContentViewShouldEndEditing:(id)arg1 ;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(SUTextContentView *)textContentView;
@end

