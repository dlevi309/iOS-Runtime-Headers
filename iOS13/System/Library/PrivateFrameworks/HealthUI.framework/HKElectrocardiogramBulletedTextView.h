/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray, NSString;

@interface HKElectrocardiogramBulletedTextView : UIView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSMutableArray* _bodyFirstBaselineConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                      //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;              //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
-(id)init;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(NSString *)titleText;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)_setupConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
@end

