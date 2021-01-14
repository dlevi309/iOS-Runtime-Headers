/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIViewController.h>

@class SFShareAudioViewController, UILabel, UIView;

@interface SFShareAudioBaseViewController : UIViewController {

	SFShareAudioViewController* _mainController;
	UILabel* _titleLabel;
	UIView* _cardView;
	BOOL _viewActive;

}

@property (nonatomic,retain) SFShareAudioViewController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                        //@synthesize cardView=_cardView - In the implementation block
@property (assign,nonatomic) BOOL viewActive;                                          //@synthesize viewActive=_viewActive - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
-(void)setMainController:(SFShareAudioViewController *)arg1 ;
-(SFShareAudioViewController *)mainController;
-(BOOL)viewActive;
-(void)setViewActive:(BOOL)arg1 ;
@end

