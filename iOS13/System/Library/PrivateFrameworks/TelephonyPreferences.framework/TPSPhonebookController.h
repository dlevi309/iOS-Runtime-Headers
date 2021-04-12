/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <libobjc.A.dylib/TPSPhonebookTelephonyControllerDelegate.h>

@protocol TPSPhonebookControllerDelegate;
@class NSString, TPSPhonebookTelephonyController, CTXPCServiceSubscriptionContext;

@interface TPSPhonebookController : NSObject <TPSPhonebookTelephonyControllerDelegate> {

	NSString* _subscriptionISOCountryCode;
	id<TPSPhonebookControllerDelegate> _delegate;
	TPSPhonebookTelephonyController* _telephonyClient;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,readonly) TPSPhonebookTelephonyController * telephonyClient;                    //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionISOCountryCode;                           //@synthesize subscriptionISOCountryCode=_subscriptionISOCountryCode - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) id<TPSPhonebookControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSubscriptionEditable,nonatomic,readonly) BOOL subscriptionEditable; 
@property (nonatomic,copy,readonly) NSString * localizedSubscriptionTelephoneNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TPSPhonebookControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSPhonebookControllerDelegate>)arg1 ;
-(TPSPhonebookTelephonyController *)telephonyClient;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(NSString *)subscriptionISOCountryCode;
-(void)phonebookController:(id)arg1 didChangePhoneNumberInfo:(id)arg2 ;
-(BOOL)isSubscriptionEditable;
-(NSString *)localizedSubscriptionTelephoneNumber;
-(void)updateSubscriptionTelephoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

