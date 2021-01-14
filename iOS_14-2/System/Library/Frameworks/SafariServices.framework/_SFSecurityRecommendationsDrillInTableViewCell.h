/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, NSParagraphStyle, NSNumberFormatter, NSString;

@interface _SFSecurityRecommendationsDrillInTableViewCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UIImageView* _badgeView;
	UIImageView* _checkmarkView;
	NSParagraphStyle* _labelParagraphStyle;
	NSNumberFormatter* _numberFormatter;
	long long _warningStyle;
	long long _numberOfWarnings;

}

@property (nonatomic,copy) NSString * subtitleText; 
@property (assign,nonatomic) long long warningStyle;                  //@synthesize warningStyle=_warningStyle - In the implementation block
@property (assign,nonatomic) long long numberOfWarnings;              //@synthesize numberOfWarnings=_numberOfWarnings - In the implementation block
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setWarningStyle:(long long)arg1 ;
-(void)setNumberOfWarnings:(long long)arg1 ;
-(NSString *)subtitleText;
-(void)_setDetailLabelText;
-(long long)warningStyle;
-(long long)numberOfWarnings;
-(void)_commonInit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

