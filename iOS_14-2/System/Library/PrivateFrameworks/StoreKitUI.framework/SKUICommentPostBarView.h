/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUICommentDelegate;
@class UIButton, SKUICommentPostBarTextField, NSString, UILabel;

@interface SKUICommentPostBarView : UIView <UITextFieldDelegate> {

	UIButton* _postButton;
	SKUICommentPostBarTextField* _postTextField;
	NSString* _commenter;
	UILabel* _asLabel;
	UIButton* _asNameButton;
	NSString* _asText;
	id<SKUICommentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUICommentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * commenter;                                   //@synthesize commenter=_commenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUICommentDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setText:(id)arg1 ;
-(void)_post:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SKUICommentDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(id)_asLabel;
-(void)_postComment;
-(id)_asNameButton;
-(void)_changeCommenter:(id)arg1 ;
-(void)setAsText:(id)arg1 ;
-(void)setPostButtonText:(id)arg1 ;
-(void)setCommenter:(NSString *)arg1 ;
-(void)setPostButtonVisible:(BOOL)arg1 ;
-(NSString *)commenter;
@end

