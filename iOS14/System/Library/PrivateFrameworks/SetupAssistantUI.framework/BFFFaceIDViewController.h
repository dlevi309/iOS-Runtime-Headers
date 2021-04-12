/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/BKUIPearlEnrollControllerDelegate.h>
#import <libobjc.A.dylib/BYEnvironmentDependencyReceiver.h>

@protocol BYDeviceProvider, BFFFaceIDViewControllerDelegate;
@class BuddyInternalSkipInfoProvider, BKUIPearlEnrollControllerPreloadedState, OBPrivacyLinkController, UIView, OBAnimationController, NSString;

@interface BFFFaceIDViewController : OBWelcomeController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {

	BKUIPearlEnrollControllerPreloadedState* _preloadedState;
	BOOL _completesOnCancel;
	BOOL _inDemo;
	BOOL _shouldShowWallet;
	id<BYDeviceProvider> _deviceProvider;
	id<BFFFaceIDViewControllerDelegate> _faceIDViewControllerDelegate;
	OBPrivacyLinkController* _privacyLink;
	UIView* _iconContainer;
	OBAnimationController* _animationController;

}

@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                                                //@synthesize privacyLink=_privacyLink - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWallet;                                                                //@synthesize shouldShowWallet=_shouldShowWallet - In the implementation block
@property (nonatomic,retain) UIView * iconContainer;                                                               //@synthesize iconContainer=_iconContainer - In the implementation block
@property (nonatomic,retain) OBAnimationController * animationController;                                          //@synthesize animationController=_animationController - In the implementation block
@property (assign,nonatomic) BOOL completesOnCancel;                                                               //@synthesize completesOnCancel=_completesOnCancel - In the implementation block
@property (nonatomic,readonly) BOOL inDemo;                                                                        //@synthesize inDemo=_inDemo - In the implementation block
@property (nonatomic,retain) id<BYDeviceProvider> deviceProvider;                                                  //@synthesize deviceProvider=_deviceProvider - In the implementation block
@property (assign,nonatomic,__weak) id<BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;              //@synthesize faceIDViewControllerDelegate=_faceIDViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) BuddyInternalSkipInfoProvider * internalSkipInfoProvider; 
-(OBAnimationController *)animationController;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)inDemo;
-(void)viewDidLoad;
-(UIView *)iconContainer;
-(void)setIconContainer:(UIView *)arg1 ;
-(void)setAnimationController:(OBAnimationController *)arg1 ;
-(BOOL)_sheetMode;
-(void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2 ;
-(void)setFaceIDViewControllerDelegate:(id<BFFFaceIDViewControllerDelegate>)arg1 ;
-(void)setCompletesOnCancel:(BOOL)arg1 ;
-(void)setDeviceProvider:(id<BYDeviceProvider>)arg1 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldShowWallet:(BOOL)arg1 ;
-(BOOL)shouldShowWallet;
-(void)_didSelectEnroll;
-(void)_didSelectSkip;
-(void)resetColorsAnimated:(BOOL)arg1 ;
-(id<BFFFaceIDViewControllerDelegate>)faceIDViewControllerDelegate;
-(BOOL)completesOnCancel;
-(id<BYDeviceProvider>)deviceProvider;
-(id)initInDemo:(BOOL)arg1 ;
-(void)willStartOver;
@end

