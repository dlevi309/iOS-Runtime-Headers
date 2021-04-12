/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet, UIViewController;

@interface TRProxyAuthOperation : TROperation {

	ACAccount* _account;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)execute;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(void)_sendProxyDeviceRequest;
-(void)_handleProxyDeviceResponse:(id)arg1 ;
-(void)_performProxyAuthenticationWithProxiedDevice:(id)arg1 ;
-(NSSet *)targetedServices;
-(void)_handleProxyAuthenticationResponse:(id)arg1 ;
@end

