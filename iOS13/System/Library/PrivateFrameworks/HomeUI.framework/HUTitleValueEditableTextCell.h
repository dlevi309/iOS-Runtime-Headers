/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class UITextField, HFItem, NSString, UIFont, UILabel, NSArray, NSLayoutConstraint;

@interface HUTitleValueEditableTextCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol> {

	BOOL _disabled;
	BOOL _hideTitle;
	UITextField* _valueTextField;
	HFItem* _item;
	NSString* _titleText;
	UIFont* _titleFont;
	UILabel* _titleLabel;
	NSArray* _titleLabelConstraints;
	NSArray* _valueTextFieldConstraints;
	NSLayoutConstraint* _labelsSpacingConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * titleLabelConstraints;                                  //@synthesize titleLabelConstraints=_titleLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * valueTextFieldConstraints;                              //@synthesize valueTextFieldConstraints=_valueTextFieldConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelsSpacingConstraint;                     //@synthesize labelsSpacingConstraint=_labelsSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;                     //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                             //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                               //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                                   //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,readonly) UITextField * valueTextField;                                   //@synthesize valueTextField=_valueTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(BOOL)requiresConstraintBasedLayout;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTitle;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_addTitleLabel;
-(UITextField *)valueTextField;
-(void)_addValueTextField;
-(void)setTitleLabelConstraints:(NSArray *)arg1 ;
-(void)setLabelsSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)titleLabelConstraints;
-(NSArray *)valueTextFieldConstraints;
-(void)setValueTextFieldConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)labelsSpacingConstraint;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

