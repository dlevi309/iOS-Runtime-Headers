/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIStackView, NSLayoutConstraint;

@interface WFContentAttributionTableViewCell : UITableViewCell {

	UILabel* _bundleNameLabel;
	UILabel* _accountIdentifierLabel;
	UILabel* _managedLevelLabel;
	UILabel* _disclosureLevelLabel;
	UIStackView* _contentStackView;
	NSLayoutConstraint* _firstLineBaseLineConstaint;
	NSLayoutConstraint* _secondLineBaseLineConstaint;

}

@property (nonatomic,retain) UIStackView * contentStackView;                                //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstLineBaseLineConstaint;               //@synthesize firstLineBaseLineConstaint=_firstLineBaseLineConstaint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondLineBaseLineConstaint;              //@synthesize secondLineBaseLineConstaint=_secondLineBaseLineConstaint - In the implementation block
@property (nonatomic,retain) UILabel * bundleNameLabel;                                     //@synthesize bundleNameLabel=_bundleNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * accountIdentifierLabel;                              //@synthesize accountIdentifierLabel=_accountIdentifierLabel - In the implementation block
@property (nonatomic,retain) UILabel * managedLevelLabel;                                   //@synthesize managedLevelLabel=_managedLevelLabel - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLevelLabel;                                //@synthesize disclosureLevelLabel=_disclosureLevelLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIStackView *)contentStackView;
-(void)setContentStackView:(UIStackView *)arg1 ;
-(void)updateCellWithContentAttribution:(id)arg1 ;
-(UILabel *)bundleNameLabel;
-(void)setBundleNameLabel:(UILabel *)arg1 ;
-(UILabel *)accountIdentifierLabel;
-(void)setAccountIdentifierLabel:(UILabel *)arg1 ;
-(UILabel *)managedLevelLabel;
-(void)setManagedLevelLabel:(UILabel *)arg1 ;
-(UILabel *)disclosureLevelLabel;
-(void)setDisclosureLevelLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)firstLineBaseLineConstaint;
-(void)setFirstLineBaseLineConstaint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondLineBaseLineConstaint;
-(void)setSecondLineBaseLineConstaint:(NSLayoutConstraint *)arg1 ;
@end

