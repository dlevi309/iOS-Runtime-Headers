/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <libobjc.A.dylib/SKCloudServiceSetupRemoteViewControllerDelegate.h>

@protocol SKCloudServiceSetupViewControllerDelegate;
@class SURedeemCameraViewController, _UIResilientRemoteViewContainerViewController, SKCloudServiceSetupReloadContext, SFSafariViewController, SKCloudServiceSetupConfiguration, NSString;

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate> {

	SURedeemCameraViewController* _presentedRedeemCameraViewController;
	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;
	BOOL _isRemoteViewControllerReady;
	BOOL _isUnableToLoadRemoteViewController;
	BOOL _hasInitializedServiceViewController;
	BOOL _isFullyAppeared;
	SKCloudServiceSetupReloadContext* _activeCloudServiceSetupReloadContext;
	/*^block*/id _loadCompletionHandler;
	SFSafariViewController* _safariViewController;
	id<SKCloudServiceSetupViewControllerDelegate> _delegate;
	SKCloudServiceSetupConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) SKCloudServiceSetupConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<SKCloudServiceSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SKCloudServiceSetupViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_requestRemoteViewController;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<SKCloudServiceSetupViewControllerDelegate>)arg1 ;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
-(SKCloudServiceSetupConfiguration *)configuration;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)loadWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setModalInPresentation:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleSafariScriptURL:(id)arg1 ;
-(void)reloadWithContext:(id)arg1 ;
-(void)_dismissCloudServiceSetupViewControllerWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 errorDescriptionLocalizationKey:(id)arg2 ;
-(void)_reportErrorForMissingSystemMusicApplication;
-(void)_reloadWithActiveCloudServiceSetupReloadContext;
-(void)_remoteViewControllerExtensionWasInterrupted;
-(void)_didReceiveRemoteViewController:(id)arg1 ;
@end

