/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

@interface SFContactAutoFillTableViewCell : UITableViewCell {

	SFContactAutoFillValue* _value;
	UIButton* _checkmarkButton;
	UILabel* _categoryLabel;
	UILabel* _optionLabel;
	BOOL _usesDetailAppearance;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL usesDetailAppearance;              //@synthesize usesDetailAppearance=_usesDetailAppearance - In the implementation block
@property (assign,nonatomic) BOOL checked;                           //@synthesize checked=_checked - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setUsesDetailAppearance:(BOOL)arg1 ;
-(void)setValue:(id)arg1 property:(id)arg2 ;
-(void)checkmarkButtonTapped:(id)arg1 ;
-(BOOL)usesDetailAppearance;
@end

