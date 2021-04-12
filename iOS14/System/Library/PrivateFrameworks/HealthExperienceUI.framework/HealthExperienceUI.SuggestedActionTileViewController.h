/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKitCore/UIViewController.h>

@class UIView, UIImageView, NSLayoutConstraint, UILabel, UIButton;

@interface HealthExperienceUI.SuggestedActionTileViewController : UIViewController {

	 context;
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
	 actionButtonStyle;
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
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(void)didTapLink:(id)arg1 ;
-(UIView *)imageBackgroundView;
-(void)setImageBackgroundView:(UIView *)arg1 ;
-(NSLayoutConstraint *)containerViewTopConstraint;
-(void)setContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewBottomConstraint;
-(void)setContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didTapAction:(id)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewTopConstraint;
-(void)setImageBackgroundViewContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageBackgroundViewContainerViewBottomConstraint;
-(void)setImageBackgroundViewContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)containerView;
-(UIButton *)actionButton;
-(void)viewDidLoad;
-(void)setActionButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)actionButtonHeightConstraint;
-(void)setActionButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)bodyLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

