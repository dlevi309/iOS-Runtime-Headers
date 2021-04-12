/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKitCore/UIViewController.h>

@class UIView, UIImageView, NSLayoutConstraint, UILabel, UIButton;

@interface HealthExperienceUI.SuggestedActionTileViewController : UIViewController {

	 nibObjects;
	 containerView;
	 imageView;
	 imageBackgroundView;
	 containerViewTopConstraint;
	 containerViewBottomConstraint;
	 imageBackgroundViewContainerViewTopConstraint;
	 imageBackgroundViewContainerViewBottomConstraint;
	 titleLabel;
	 bodyLabel;
	 linkButton;
	 linkButtonTopSpacingConstraint;
	 linkButtonHeightConstraint;
	 actionButton;
	 actionButtonTopSpacingConstraint;
	 actionButtonHeightConstraint;
	 suggestedActionDelegate;

}

@property (assign,__weak,nonatomic) UIView * containerView; 
@property (assign,__weak,nonatomic) UIImageView * imageView; 
@property (assign,__weak,nonatomic) UIView * imageBackgroundView; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewTopConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * containerViewBottomConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * imageBackgroundViewContainerViewTopConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * imageBackgroundViewContainerViewBottomConstraint; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * bodyLabel; 
@property (assign,__weak,nonatomic) UIButton * actionButton; 
@property (retain,nonatomic) NSLayoutConstraint * actionButtonHeightConstraint; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewTopConstraint;
-(void)didTapAction:(id)arg1 ;
-(void)didTapLink:(id)arg1 ;
-(UIView *)imageBackgroundView;
-(void)setImageBackgroundView:(UIView *)arg1 ;
-(NSLayoutConstraint *)containerViewBottomConstraint;
-(void)setContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewTopConstraint;
-(void)setImageBackgroundViewContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewBottomConstraint;
-(void)setImageBackgroundViewContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)actionButtonHeightConstraint;
-(void)setActionButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

