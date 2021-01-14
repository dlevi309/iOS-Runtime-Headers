/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_leadingButtonTapped:(id)arg1 ;
-(void)_enableButtons:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_trailingButtonTapped:(id)arg1 ;
-(void)setTransaction:(id)arg1 submittingAnswer:(id)arg2 ;
-(id<PKTransactionDetailQuestionCellDelegate>)questionDelegate;
-(void)setQuestionDelegate:(id<PKTransactionDetailQuestionCellDelegate>)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

