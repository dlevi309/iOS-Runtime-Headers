/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject {

	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
+(id)sharedFactory;
-(id)init;
-(id)loadingViewController;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)viewServiceRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)authenticationViewControllerForViewModel:(id)arg1 ;
-(id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1 ;
-(id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(/*^block*/id)arg1 ;
-(id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(/*^block*/id)arg4 ;
-(id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 delegate:(id)arg2 ;
-(id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(BOOL)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

