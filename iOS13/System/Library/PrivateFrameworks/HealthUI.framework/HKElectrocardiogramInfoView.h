/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface HKElectrocardiogramInfoView : UIStackView {

	UILabel* _heartRateLabel;
	UILabel* _bodyLabel;
	NSLayoutConstraint* _heartRateLabelLeadingConstraint;
	NSLayoutConstraint* _heartRateFirstBaselineConstraint;
	NSLayoutConstraint* _heartImageViewHeightConstraint;

}

@property (nonatomic,retain) UILabel * heartRateLabel;                                           //@synthesize heartRateLabel=_heartRateLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartRateLabelLeadingConstraint;               //@synthesize heartRateLabelLeadingConstraint=_heartRateLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartRateFirstBaselineConstraint;              //@synthesize heartRateFirstBaselineConstraint=_heartRateFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartImageViewHeightConstraint;                //@synthesize heartImageViewHeightConstraint=_heartImageViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSString * heartRateText; 
@property (nonatomic,retain) NSString * bodyText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)updateConstraints;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyView;
-(void)_addSubviews;
-(UILabel *)heartRateLabel;
-(NSLayoutConstraint *)heartRateLabelLeadingConstraint;
-(NSLayoutConstraint *)heartRateFirstBaselineConstraint;
-(NSLayoutConstraint *)heartImageViewHeightConstraint;
-(id)_heartRateView;
-(void)setHeartRateLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeartRateFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeartImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)heartRateText;
-(void)setHeartRateText:(NSString *)arg1 ;
-(void)setHeartRateLabel:(UILabel *)arg1 ;
@end

