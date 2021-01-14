/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)titleLabel;
-(void)_updateTitle;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIFont *)titleFont;
-(NSString *)titleText;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateConstraints;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
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

