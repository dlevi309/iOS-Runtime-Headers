/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol _SKUIStatusBarAlertViewControllerDelegate;
@class UILabel, UIView, NSString;

@interface _SKUIStatusBarAlertViewController : UIViewController {

	UILabel* _label;
	BOOL _onScreen;
	long long _style;
	unsigned long long _supportedInterfaceOrientations;
	id<_SKUIStatusBarAlertViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * statusBarView; 
@property (assign,nonatomic) long long style;                                                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                            //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;                          //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic,__weak) id<_SKUIStatusBarAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultInterfaceOrientations; 
-(id<_SKUIStatusBarAlertViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SKUIStatusBarAlertViewControllerDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)isOnScreen;
-(void)updateLabelFrame;
-(void)endAllAnimations;
-(void)setOnScreen:(BOOL)arg1 ;
-(unsigned long long)defaultInterfaceOrientations;
-(UIView *)statusBarView;
-(void)handleLabelTap:(id)arg1 ;
@end

