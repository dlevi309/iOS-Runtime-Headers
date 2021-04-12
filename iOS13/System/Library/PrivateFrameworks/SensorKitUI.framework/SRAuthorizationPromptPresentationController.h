/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <libobjc.A.dylib/SRRemoteAuthorizationPromptViewControllerDelegate.h>

@protocol SRRemoteAuthorizationPromptViewController;
@class UIViewController, NSError, NSString;

@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate> {

	BOOL _presenting;
	BOOL _hostNavigationBarHidden;
	UIViewController*<SRRemoteAuthorizationPromptViewController> _viewController;
	/*^block*/id _completionHandler;
	NSError* _error;
	long long _reason;

}

@property (nonatomic,retain) UIViewController*<SRRemoteAuthorizationPromptViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                                      //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) BOOL hostNavigationBarHidden;                                                             //@synthesize hostNavigationBarHidden=_hostNavigationBarHidden - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long reason;                                                                         //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
-(void)dealloc;
-(long long)reason;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setViewController:(UIViewController*<SRRemoteAuthorizationPromptViewController>)arg1 ;
-(void)setReason:(long long)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController*<SRRemoteAuthorizationPromptViewController>)viewController;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentPendingAuthorizationPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundlePath:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentResearchDataViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authorizationRequestCompleted;
-(BOOL)presentAnyViewController:(id)arg1 reason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)presentationAnchor;
-(id)presentingViewControllerFromRoot:(id)arg1 ;
-(id)navigationControllerFromRoot:(id)arg1 ;
-(void)setHostNavigationBarHidden:(BOOL)arg1 ;
-(void)completePromptWithError:(id)arg1 ;
-(BOOL)isViewControllerPresentedModally;
-(BOOL)hostNavigationBarHidden;
-(void)viewControllerCleanUp;
-(void)authorizationRequestFailedWithError:(id)arg1 ;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1 ;
-(void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3 ;
-(void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;
@end

