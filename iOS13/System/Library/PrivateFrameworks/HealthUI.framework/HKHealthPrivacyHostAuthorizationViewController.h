/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;
@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy; 
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)arg1 ;
-(void)show;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2 ;
-(id<HKHealthPrivacyServiceRemoteAuthorizationViewController>)_healthPrivacyServiceViewControllerProxy;
@end

