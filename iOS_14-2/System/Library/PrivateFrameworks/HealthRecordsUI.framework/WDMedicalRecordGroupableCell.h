/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, UIColor, HKSeparatorLineView, NSLayoutConstraint;

@interface WDMedicalRecordGroupableCell : UITableViewCell {

	BOOL _extraTopPadding;
	long long _intendedPlacement;
	UIView* _pillBackgroundView;
	UIColor* _pillBackgroundColor;
	double _sectionTopPadding;
	HKSeparatorLineView* _separatorView;
	NSLayoutConstraint* _separatorLeadingConstant;
	NSLayoutConstraint* _separatorTrailingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	UIEdgeInsets _separatorInsets;

}

@property (nonatomic,retain) UIColor * pillBackgroundColor;                                 //@synthesize pillBackgroundColor=_pillBackgroundColor - In the implementation block
@property (nonatomic,retain) UIView * pillBackgroundView;                                   //@synthesize pillBackgroundView=_pillBackgroundView - In the implementation block
@property (assign,nonatomic) double sectionTopPadding;                                      //@synthesize sectionTopPadding=_sectionTopPadding - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * separatorView;                           //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorLeadingConstant;                 //@synthesize separatorLeadingConstant=_separatorLeadingConstant - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorTrailingConstraint;              //@synthesize separatorTrailingConstraint=_separatorTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                            //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                         //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign,nonatomic) BOOL extraTopPadding;                                          //@synthesize extraTopPadding=_extraTopPadding - In the implementation block
@property (assign,nonatomic) long long intendedPlacement;                                   //@synthesize intendedPlacement=_intendedPlacement - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;                                  //@synthesize separatorInsets=_separatorInsets - In the implementation block
+(id)defaultReuseIdentifier;
+(double)defaultGap;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(HKSeparatorLineView *)separatorView;
-(double)_topPadding;
-(NSLayoutConstraint *)topConstraint;
-(double)_cornerRadius;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setSectionTopPadding:(double)arg1 ;
-(void)prepareForReuse;
-(UIView *)pillBackgroundView;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setUpConstraints;
-(void)setIntendedPlacement:(long long)arg1 ;
-(void)setSeparatorDashStyle:(long long)arg1 hidden:(BOOL)arg2 ;
-(void)setPillBackgroundView:(UIView *)arg1 ;
-(void)setPillBackgroundColor:(UIColor *)arg1 ;
-(void)setSeparatorLeadingConstant:(NSLayoutConstraint *)arg1 ;
-(void)setSeparatorTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)separatorLeadingConstant;
-(NSLayoutConstraint *)separatorTrailingConstraint;
-(UIColor *)pillBackgroundColor;
-(long long)intendedPlacement;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setExtraTopPadding:(BOOL)arg1 ;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)extraTopPadding;
-(UIEdgeInsets)separatorInsets;
-(double)sectionTopPadding;
-(void)setSeparatorView:(HKSeparatorLineView *)arg1 ;
@end

