/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_queue;
@class UIImage, OBPrivacyLinkController, OBWelcomeController, NSString, NSObject, UITraitCollection;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _viewHasAppeared;
	UIImage* _rightImage;
	OBPrivacyLinkController* _privacyLinkController;
	/*^block*/id _primaryButtonCallback;
	OBWelcomeController* _welcomeController;
	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _primaryButtonText;
	NSObject*<OS_dispatch_queue> _metricsQueue;

}

@property (nonatomic,retain) OBWelcomeController * welcomeController;                      //@synthesize welcomeController=_welcomeController - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) NSString * primaryButtonText;                                 //@synthesize primaryButtonText=_primaryButtonText - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;              //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedInFormSheet; 
@property (nonatomic,readonly) UITraitCollection * cappedTraitCollection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                    //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                         //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) UIImage * headerImage; 
@property (nonatomic,retain) UIImage * rightImage;                                         //@synthesize rightImage=_rightImage - In the implementation block
@property (nonatomic,copy) id primaryButtonCallback;                                       //@synthesize primaryButtonCallback=_primaryButtonCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)privacyLinkIdentifiersFromController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setImage:(UIImage *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(UIImage *)headerImage;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(BOOL)viewHasAppeared;
-(BOOL)isPresentedInFormSheet;
-(void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2 ;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5 ;
-(OBWelcomeController *)welcomeController;
-(void)didTapPrimaryButton:(id)arg1 ;
-(UITraitCollection *)cappedTraitCollection;
-(id)childTraitCollectionForViewController:(id)arg1 ;
-(NSString *)primaryButtonText;
-(id)primaryButtonCallback;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5 ;
-(id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4 ;
-(void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2 ;
-(void)updateOverrideTraits;
-(UIImage *)rightImage;
-(void)setRightImage:(UIImage *)arg1 ;
-(void)setPrimaryButtonCallback:(id)arg1 ;
-(void)setWelcomeController:(OBWelcomeController *)arg1 ;
-(void)setPrimaryButtonText:(NSString *)arg1 ;
@end

