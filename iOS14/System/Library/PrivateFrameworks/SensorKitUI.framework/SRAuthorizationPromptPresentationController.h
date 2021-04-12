/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(UIViewController*<SRRemoteAuthorizationPromptViewController>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(UIViewController*<SRRemoteAuthorizationPromptViewController>)viewController;
-(void)setPresenting:(BOOL)arg1 ;
-(long long)reason;
-(void)setReason:(long long)arg1 ;
-(BOOL)isPresenting;
-(void)dealloc;
-(void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentResearchDataViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentFirstRunOnboardingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)presentationAnchor;
-(BOOL)presentAnyViewController:(id)arg1 reason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)presentingViewControllerFromRoot:(id)arg1 ;
-(id)navigationControllerFromRoot:(id)arg1 ;
-(void)setHostNavigationBarHidden:(BOOL)arg1 ;
-(void)completePromptWithError:(id)arg1 ;
-(BOOL)isViewControllerPresentedModally;
-(BOOL)hostNavigationBarHidden;
-(void)viewControllerCleanUp;
-(void)authorizationRequestCompleted;
-(void)authorizationRequestFailedWithError:(id)arg1 ;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;
@end

