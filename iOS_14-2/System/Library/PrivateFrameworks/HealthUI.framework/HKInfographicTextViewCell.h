/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface HKInfographicTextViewCell : UITableViewCell {

	UILabel* _descriptionLabel;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                         //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(id)_descriptionFont;
-(NSLayoutConstraint *)heightConstraint;
-(id)_descriptionTextColor;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_labelWithFont:(id)arg1 ;
@end

