/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@protocol AMSAuthKitUpdateTaskDelegate;
@class ACAccount, AMSAuthenticateOptions, NSString;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {

	ACAccount* _account;
	AMSAuthenticateOptions* _options;
	id<AMSAuthKitUpdateTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSAuthKitUpdateTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;                            //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg1 ;
-(ACAccount *)account;
-(id<AMSAuthKitUpdateTaskDelegate>)delegate;
-(AMSAuthenticateOptions *)options;
-(void)setDelegate:(id<AMSAuthKitUpdateTaskDelegate>)arg1 ;
-(unsigned long long)_authenticationType;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)performAuthKitUpdate;
-(id)_createAuthKitContext;
-(void)_configureAuthKitContext:(id)arg1 ;
-(id)_createAuthKitController;
-(BOOL)_canPresentBackgroundPrompt;
-(void)_logPromptSummaryForResults:(id)arg1 context:(id)arg2 ;
-(void)_configureClientInfoForContext:(id)arg1 ;
-(void)_configureCompanionDeviceForContext:(id)arg1 ;
-(void)_configureIdentifiersForContext:(id)arg1 ;
-(void)_configureProxyIdentifiersForContext:(id)arg1 ;
-(void)_configureStringsForContext:(id)arg1 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
@end

