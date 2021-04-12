/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <libobjc.A.dylib/TPSRequestControllerDelegate.h>

@protocol TPSCallWaitingControllerDelegate;
@class TPSCallWaitingRequestController, CTXPCServiceSubscriptionContext, NSString;

@interface TPSCallWaitingController : NSObject <TPSRequestControllerDelegate> {

	id<TPSCallWaitingControllerDelegate> _delegate;
	long long _state;
	TPSCallWaitingRequestController* _requestController;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,readonly) TPSCallWaitingRequestController * requestController;                //@synthesize requestController=_requestController - In the implementation block
@property (assign,nonatomic) long long state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCallWaitingControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TPSCallWaitingControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSCallWaitingControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(TPSCallWaitingRequestController *)requestController;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)requestController:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)requestStateChange:(long long)arg1 ;
@end

