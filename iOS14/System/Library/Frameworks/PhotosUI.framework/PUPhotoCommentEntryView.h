/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PUPhotoCommentEntryViewDelegate;
@class UILabel, UITextView, UIButton, NSString;

@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate> {

	UILabel* placeholderLabel;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIButton* _postButton;
	id<PUPhotoCommentEntryViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) UITextView * textView;                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * placeholderLabel;                              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain,readonly) UIButton * postButton;                                   //@synthesize postButton=_postButton - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoCommentEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUPhotoCommentEntryViewDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)setDelegate:(id<PUPhotoCommentEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeight;
-(UIButton *)postButton;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(id)trimmedText;
-(UILabel *)placeholderLabel;
-(void)clearText;
@end

