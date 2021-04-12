/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TPSCallWaitingRequestController *)requestController;
-(id)init;
-(id<TPSCallWaitingControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSCallWaitingControllerDelegate>)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)requestController:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)requestStateChange:(long long)arg1 ;
@end

