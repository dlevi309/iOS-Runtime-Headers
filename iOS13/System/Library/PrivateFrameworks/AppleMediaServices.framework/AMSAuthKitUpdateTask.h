/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class NSArray, ACAccount, ACDAccountStore, AMSAuthenticateOptions, NSString;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {

	NSArray* _additionalControllers;
	ACAccount* _account;
	ACDAccountStore* _accountStore;
	AMSAuthenticateOptions* _options;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACDAccountStore * accountStore;                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) AMSAuthenticateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSArray * additionalControllers;               //@synthesize additionalControllers=_additionalControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2 ;
+(id)_createAuthenticationController;
-(AMSAuthenticateOptions *)options;
-(void)setOptions:(AMSAuthenticateOptions *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setAccountStore:(ACDAccountStore *)arg1 ;
-(ACDAccountStore *)accountStore;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)performAuthKitUpdate;
-(id)_performAuthKitUpdateUsingSecondaryPasswordForAccount:(id)arg1 options:(id)arg2 ;
-(id)_performAuthKitUpdateUsingRawPasswordForAccount:(id)arg1 options:(id)arg2 ;
-(id)_performAuthKitUpdateSilentlyForAccount:(id)arg1 options:(id)arg2 ;
-(id)_performAuthKitUpdateByPromptingUserForAccount:(id)arg1 options:(id)arg2 ;
-(NSArray *)additionalControllers;
-(id)_promptAllowedBundleIds;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 ;
-(void)setAdditionalControllers:(NSArray *)arg1 ;
@end

