/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <UIKitCore/UITableViewCell.h>

@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;
@class UILabel, UIButton;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell {

	id<LUILogFilterCurrentPredicateTableViewCellDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _deleteButton;

}

@property (assign,nonatomic,__weak) id<LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                          //@synthesize deleteButton=_deleteButton - In the implementation block
-(UILabel *)titleLabel;
-(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)delegate;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)_createTitleLabel;
-(UIButton *)deleteButton;
-(void)_setupUI;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_createDeleteButton;
@end

