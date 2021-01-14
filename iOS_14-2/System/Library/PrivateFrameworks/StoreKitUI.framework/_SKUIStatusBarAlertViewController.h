/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isOnScreen;
-(NSString *)message;
-(id<_SKUIStatusBarAlertViewControllerDelegate>)delegate;
-(void)setOnScreen:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<_SKUIStatusBarAlertViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)handleLabelTap:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)updateLabelFrame;
-(long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)endAllAnimations;
-(unsigned long long)defaultInterfaceOrientations;
-(UIView *)statusBarView;
@end

