/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKIssuerProvisioningExtensionAuthorizationRemoteViewController.h>

@protocol PKIssuerProvisioningExtensionAuthorizationRemoteViewController
@required
-(void)serviceViewControllerDidCompleteWithResult:(long long)arg1;

@end


@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {

	/*^block*/id _completionHandler;
	long long _result;
	BOOL _finished;

}
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
-(void)pkui_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)serviceViewControllerDidCompleteWithResult:(long long)arg1 ;
-(void)pkui_finish;
-(BOOL)_isPresentationContextByDefault;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

