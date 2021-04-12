/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBSplashController.h>
#import <libobjc.A.dylib/BKUIPearlEnrollControllerDelegate.h>
#import <libobjc.A.dylib/BYEnvironmentDependencyReceiver.h>

@protocol BYDeviceProvider, BFFFaceIDViewControllerDelegate;
@class BKUIPearlEnrollControllerPreloadedState, UIImageView, OBPrivacyLinkController, NSString;

@interface BFFFaceIDViewController : OBSplashController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {

	BKUIPearlEnrollControllerPreloadedState* _preloadedState;
	UIImageView* _splashImageView;
	BOOL _completesOnCancel;
	BOOL _inDemo;
	BOOL _shouldShowWallet;
	id<BYDeviceProvider> _deviceProvider;
	id<BFFFaceIDViewControllerDelegate> _faceIDViewControllerDelegate;
	OBPrivacyLinkController* _privacyLink;

}

@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                                                //@synthesize privacyLink=_privacyLink - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWallet;                                                                //@synthesize shouldShowWallet=_shouldShowWallet - In the implementation block
@property (assign,nonatomic) BOOL completesOnCancel;                                                               //@synthesize completesOnCancel=_completesOnCancel - In the implementation block
@property (nonatomic,readonly) BOOL inDemo;                                                                        //@synthesize inDemo=_inDemo - In the implementation block
@property (nonatomic,retain) id<BYDeviceProvider> deviceProvider;                                                  //@synthesize deviceProvider=_deviceProvider - In the implementation block
@property (assign,nonatomic,__weak) id<BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;              //@synthesize faceIDViewControllerDelegate=_faceIDViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id<BYDeviceProvider>)deviceProvider;
-(void)setDeviceProvider:(id<BYDeviceProvider>)arg1 ;
-(void)setFaceIDViewControllerDelegate:(id<BFFFaceIDViewControllerDelegate>)arg1 ;
-(void)setCompletesOnCancel:(BOOL)arg1 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldShowWallet:(BOOL)arg1 ;
-(id)initInDemo:(BOOL)arg1 ;
-(BOOL)shouldShowWallet;
-(BOOL)inDemo;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(id)_createSplashImageView;
-(void)_didSelectEnroll;
-(void)_didSelectSkip;
-(OBPrivacyLinkController *)privacyLink;
-(void)resetColorsAnimated:(BOOL)arg1 ;
-(id<BFFFaceIDViewControllerDelegate>)faceIDViewControllerDelegate;
-(BOOL)completesOnCancel;
-(void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2 ;
-(void)willStartOver;
@end

