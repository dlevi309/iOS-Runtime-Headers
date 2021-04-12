/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIButton;

@interface HealthExperienceUI.MessageTileViewController : UIViewController {

	 nibObjects;
	 titleLabel;
	 bodyLabel;
	 actionButton;

}

@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * bodyLabel; 
@property (assign,__weak,nonatomic) UIButton * actionButton; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)didTapAction:(id)arg1 ;
@end

