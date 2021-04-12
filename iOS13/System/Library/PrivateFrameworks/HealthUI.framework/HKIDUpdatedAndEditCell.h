/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKIDUpdatedAndEditCellDelegate;
@class NSArray, UIStackView, NSLayoutConstraint, NSDate, UILabel, UIButton, NSString;

@interface HKIDUpdatedAndEditCell : UITableViewCell {

	NSArray* _regularLayoutConstraints;
	NSArray* _largeTextLayoutConstraints;
	UIStackView* _stackView;
	NSLayoutConstraint* _editFirstBaseLineAnchorConstraint;
	BOOL _hideEditButton;
	id<HKIDUpdatedAndEditCellDelegate> _delegate;
	NSDate* _dateSaved;
	UILabel* _titleLabel;
	UILabel* _dateLabel;
	UIButton* _editButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                           //@synthesize editButton=_editButton - In the implementation block
@property (assign,nonatomic,__weak) id<HKIDUpdatedAndEditCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved;                                              //@synthesize dateSaved=_dateSaved - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (assign,getter=isEditButtonHidden,nonatomic) BOOL hideEditButton;                   //@synthesize hideEditButton=_hideEditButton - In the implementation block
@property (assign,getter=isEditButtonDisabled,nonatomic) BOOL disableEditButton; 
-(id<HKIDUpdatedAndEditCellDelegate>)delegate;
-(void)setDelegate:(id<HKIDUpdatedAndEditCellDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)dateLabel;
-(NSString *)titleText;
-(UIButton *)editButton;
-(void)setEditButton:(UIButton *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)_updateFont;
-(void)setDateSaved:(NSDate *)arg1 ;
-(NSDate *)dateSaved;
-(void)setHideEditButton:(BOOL)arg1 ;
-(void)_editButtonTapped:(id)arg1 ;
-(void)setDisableEditButton:(BOOL)arg1 ;
-(BOOL)isEditButtonDisabled;
-(BOOL)isEditButtonHidden;
@end

