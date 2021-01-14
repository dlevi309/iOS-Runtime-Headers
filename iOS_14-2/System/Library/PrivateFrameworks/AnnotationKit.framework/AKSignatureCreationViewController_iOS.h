/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)becomeFirstResponder;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(id<AKSignatureCreationControllerDelegate>)delegate;
-(long long)positionForBar:(id)arg1 ;
-(AKSignatureBaselineView *)baselineView;
-(void)setController:(AKController *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<AKSignatureCreationControllerDelegate>)arg1 ;
-(UINavigationBar *)navBar;
-(void)didReceiveMemoryWarning;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setBaselineView:(AKSignatureBaselineView *)arg1 ;
-(void)_cancel:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)loadView;
-(void)_clear:(id)arg1 ;
-(AKController *)controller;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(void)setSignatureView:(AKInkSignatureView *)arg1 ;
-(AKInkSignatureView *)signatureView;
-(void)setResponderToRestore:(UIResponder *)arg1 ;
-(UIResponder *)responderToRestore;
-(void)_notifyDidDismiss;
-(void)_validateButtons;
-(AKSmoothPathView *)pathView;
-(void)setPathView:(AKSmoothPathView *)arg1 ;
@end

