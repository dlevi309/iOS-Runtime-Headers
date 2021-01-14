/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(void)_setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
@end

