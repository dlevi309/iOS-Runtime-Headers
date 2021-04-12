/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol PKTransactionDetailQuestionCellDelegate;
@class UILabel, PKContinuousButton, UIImageView, PKPaymentTransaction, NSString;

@interface PKTransactionDetailQuestionCell : UITableViewCell {

	UILabel* _title;
	UILabel* _message;
	PKContinuousButton* _leadingButton;
	PKContinuousButton* _trailingButton;
	UIImageView* _imageView;
	BOOL _isTemplateLayout;
	PKPaymentTransaction* _transaction;
	NSString* _submittingAnswer;
	BOOL _smallDevice;
	id<PKTransactionDetailQuestionCellDelegate> _questionDelegate;

}

@property (assign,nonatomic,__weak) id<PKTransactionDetailQuestionCellDelegate> questionDelegate;              //@synthesize questionDelegate=_questionDelegate - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_leadingButtonTapped:(id)arg1 ;
-(void)_trailingButtonTapped:(id)arg1 ;
-(void)_enableButtons:(BOOL)arg1 ;
-(void)setTransaction:(id)arg1 submittingAnswer:(id)arg2 ;
-(id<PKTransactionDetailQuestionCellDelegate>)questionDelegate;
-(void)setQuestionDelegate:(id<PKTransactionDetailQuestionCellDelegate>)arg1 ;
@end

