/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSource, NSLayoutConstraint, UITextView, _HKClinicalBulletedListLayoutManager;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell {

	HKSource* _source;
	NSLayoutConstraint* _superviewTopToContentsTextViewFirstBaselineConstraint;
	NSLayoutConstraint* _contentsTextViewLastBaselineToSuperviewBottomConstraint;
	UITextView* _contentsTextView;
	_HKClinicalBulletedListLayoutManager* _bulletLayoutManager;

}

@property (nonatomic,readonly) NSLayoutConstraint * superviewTopToContentsTextViewFirstBaselineConstraint;                //@synthesize superviewTopToContentsTextViewFirstBaselineConstraint=_superviewTopToContentsTextViewFirstBaselineConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentsTextViewLastBaselineToSuperviewBottomConstraint;              //@synthesize contentsTextViewLastBaselineToSuperviewBottomConstraint=_contentsTextViewLastBaselineToSuperviewBottomConstraint - In the implementation block
@property (nonatomic,readonly) UITextView * contentsTextView;                                                             //@synthesize contentsTextView=_contentsTextView - In the implementation block
@property (nonatomic,readonly) _HKClinicalBulletedListLayoutManager * bulletLayoutManager;                                //@synthesize bulletLayoutManager=_bulletLayoutManager - In the implementation block
@property (assign,nonatomic,__weak) HKSource * source;                                                                    //@synthesize source=_source - In the implementation block
-(void)_setUpConstraints;
-(id)_titleParagraphStyle;
-(void)setSource:(HKSource *)arg1 ;
-(id)_localizedTitleString;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HKSource *)source;
-(void)_setUpSubviews;
-(id)_createContentsTextViewWithLayoutManager:(id)arg1 ;
-(UITextView *)contentsTextView;
-(id)_attributedTitleString;
-(id)_attributedStringForBulletAtIndex:(long long)arg1 ;
-(id)_bodyEmph;
-(id)_bulletContentFont;
-(id)_bulletContentParagraphStyle;
-(id)_localizedBulletContentStringForBulletAtIndex:(long long)arg1 ;
-(id)_attributedStringForBullet;
-(id)_bulletFont;
-(NSLayoutConstraint *)superviewTopToContentsTextViewFirstBaselineConstraint;
-(NSLayoutConstraint *)contentsTextViewLastBaselineToSuperviewBottomConstraint;
-(_HKClinicalBulletedListLayoutManager *)bulletLayoutManager;
-(id)_attributedContentsTextViewStringForCurrentContentSizeCategory;
@end

