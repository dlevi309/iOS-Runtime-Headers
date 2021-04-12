/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKCDADocumentTableViewCellDelegate;
@class _HKDocumentImageView, UILabel, NSArray, UIStackView, HKAdjustableTapTargetButton;

@interface HKCDADocumentTableViewCell : UITableViewCell {

	_HKDocumentImageView* _documentImageView;
	UILabel* _titleLabel;
	NSArray* _cellLabels;
	UIStackView* _imageLabelStack;
	BOOL _showsCheckbox;
	id<HKCDADocumentTableViewCellDelegate> _delegate;
	HKAdjustableTapTargetButton* _checkboxButton;

}

@property (nonatomic,retain) HKAdjustableTapTargetButton * checkboxButton;                        //@synthesize checkboxButton=_checkboxButton - In the implementation block
@property (assign,nonatomic) BOOL showsCheckbox;                                                  //@synthesize showsCheckbox=_showsCheckbox - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (assign,nonatomic,__weak) id<HKCDADocumentTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKCDADocumentTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HKCDADocumentTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupCellStructure;
-(void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3 ;
-(void)_selectedCheckbox:(id)arg1 ;
-(id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 flexibleHeight:(BOOL)arg3 ;
-(void)setShowsCheckbox:(BOOL)arg1 ;
-(void)setCellValuesForDocumentSample:(id)arg1 ;
-(BOOL)showsCheckbox;
-(HKAdjustableTapTargetButton *)checkboxButton;
-(void)setCheckboxButton:(HKAdjustableTapTargetButton *)arg1 ;
@end

