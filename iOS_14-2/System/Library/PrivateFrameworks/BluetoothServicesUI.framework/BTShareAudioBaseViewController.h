/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <UIKitCore/UIViewController.h>

@class BTShareAudioViewController, UILabel, UIView;

@interface BTShareAudioBaseViewController : UIViewController {

	BTShareAudioViewController* _mainController;
	UILabel* _titleLabel;
	UIView* _cardView;
	BOOL _viewActive;

}

@property (nonatomic,retain) BTShareAudioViewController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                        //@synthesize cardView=_cardView - In the implementation block
@property (assign,nonatomic) BOOL viewActive;                                          //@synthesize viewActive=_viewActive - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
-(void)setMainController:(BTShareAudioViewController *)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(BTShareAudioViewController *)mainController;
-(BOOL)viewActive;
-(void)setViewActive:(BOOL)arg1 ;
@end

