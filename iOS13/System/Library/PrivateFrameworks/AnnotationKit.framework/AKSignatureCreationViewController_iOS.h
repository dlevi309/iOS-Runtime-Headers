/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol AKSignatureCreationControllerDelegate;
@class UINavigationBar, AKSmoothPathView, AKInkSignatureView, AKSignatureBaselineView, UILabel, AKController, UIResponder, NSString;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate> {

	id<AKSignatureCreationControllerDelegate> _delegate;
	UINavigationBar* _navBar;
	AKSmoothPathView* _pathView;
	AKInkSignatureView* _signatureView;
	AKSignatureBaselineView* _baselineView;
	UILabel* _label;
	AKController* _controller;
	UIResponder* _responderToRestore;

}

@property (nonatomic,retain) UINavigationBar * navBar;                              //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) AKSmoothPathView * pathView;                           //@synthesize pathView=_pathView - In the implementation block
@property (nonatomic,retain) AKInkSignatureView * signatureView;                    //@synthesize signatureView=_signatureView - In the implementation block
@property (nonatomic,retain) AKSignatureBaselineView * baselineView;                //@synthesize baselineView=_baselineView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * responderToRestore;               //@synthesize responderToRestore=_responderToRestore - In the implementation block
@property (__weak) id<AKSignatureCreationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKSignatureCreationControllerDelegate>)delegate;
-(void)setDelegate:(id<AKSignatureCreationControllerDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)loadView;
-(BOOL)becomeFirstResponder;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(long long)positionForBar:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(void)setBaselineView:(AKSignatureBaselineView *)arg1 ;
-(AKSignatureBaselineView *)baselineView;
-(id)initWithController:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(void)_clear:(id)arg1 ;
-(void)setSignatureView:(AKInkSignatureView *)arg1 ;
-(AKInkSignatureView *)signatureView;
-(void)setResponderToRestore:(UIResponder *)arg1 ;
-(UIResponder *)responderToRestore;
-(void)_setToolPickerVisible;
-(void)_validateButtons;
-(AKSmoothPathView *)pathView;
-(void)setPathView:(AKSmoothPathView *)arg1 ;
@end

