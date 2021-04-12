/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_queue;
@class OBPrivacyLinkController, AMSUIOnboardingViewController, UIImage, NSString, UIVisualEffectView, _UIBackdropView, NSObject, UITraitCollection;

@interface AMPOnboardingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _viewHasAppeared;
	OBPrivacyLinkController* _privacyLinkController;
	/*^block*/id _primaryButtonCallback;
	AMSUIOnboardingViewController* _onboardingController;
	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _primaryButtonText;
	UIVisualEffectView* _statusBarVisualEffectView;
	_UIBackdropView* _backdropView;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) AMSUIOnboardingViewController * onboardingController;              //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                              //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) NSString * primaryButtonText;                                      //@synthesize primaryButtonText=_primaryButtonText - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInFormSheet; 
@property (nonatomic,retain) UIVisualEffectView * statusBarVisualEffectView;                    //@synthesize statusBarVisualEffectView=_statusBarVisualEffectView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                    //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UITraitCollection * cappedTraitCollection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                         //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                              //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) UIImage * headerImage; 
@property (nonatomic,readonly) OBPrivacyLinkController * privacyLinkController;                 //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,copy) id primaryButtonCallback;                                            //@synthesize primaryButtonCallback=_primaryButtonCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(BOOL)isModalInPresentation;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(AMSUIOnboardingViewController *)onboardingController;
-(void)setOnboardingController:(AMSUIOnboardingViewController *)arg1 ;
-(UIImage *)headerImage;
-(BOOL)viewHasAppeared;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5 ;
-(id)primaryButtonCallback;
-(void)setPrimaryButtonCallback:(id)arg1 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(void)updateOverrideTraits;
-(UITraitCollection *)cappedTraitCollection;
-(id)childTraitCollectionForViewController:(id)arg1 ;
-(NSString *)primaryButtonText;
-(void)didTapPrimaryButton:(id)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(void)setPrimaryButtonText:(NSString *)arg1 ;
-(UIVisualEffectView *)statusBarVisualEffectView;
-(void)setStatusBarVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

