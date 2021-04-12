/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SKUICommentDelegate>)delegate;
-(void)setDelegate:(id<SKUICommentDelegate>)arg1 ;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)tintColorDidChange;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)_post:(id)arg1 ;
-(void)_postComment;
-(id)_asLabel;
-(id)_asNameButton;
-(void)_changeCommenter:(id)arg1 ;
-(void)setAsText:(id)arg1 ;
-(void)setPostButtonText:(id)arg1 ;
-(void)setCommenter:(NSString *)arg1 ;
-(void)setPostButtonVisible:(BOOL)arg1 ;
-(NSString *)commenter;
@end

