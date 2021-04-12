/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSDictionary, NSString, AMSUIPaymentVerificationMetrics, UIViewController;

@interface AMSUICardOnFilePVTFetchTask : AMSTask {

	ACAccount* _account;
	NSDictionary* _accountParameters;
	id<AMSBagProtocol> _bag;
	NSString* _displayName;
	AMSUIPaymentVerificationMetrics* _metrics;
	ACAccount* _originalAccount;
	UIViewController* _viewController;

}

@property (nonatomic,retain) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * accountParameters;                       //@synthesize accountParameters=_accountParameters - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                 //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) AMSUIPaymentVerificationMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) ACAccount * originalAccount;                            //@synthesize originalAccount=_originalAccount - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
+(id)_accountToUseFromGivenAccount:(id)arg1 accountParameters:(id)arg2 activeiTunesAccount:(id)arg3 ;
+(id)_promiseToFetchURLResponseForAccount:(id)arg1 accountParameters:(id)arg2 url:(id)arg3 bag:(id)arg4 ;
+(BOOL)_isCardOnFileOnStack:(id)arg1 ;
+(id)_tokenFromObject:(id)arg1 ;
+(id)_tokenResultFromTokenString:(id)arg1 ;
+(id)_encoderWithBag:(id)arg1 account:(id)arg2 ;
+(id)_sessionWithBag:(id)arg1 account:(id)arg2 accountParameters:(id)arg3 ;
-(void)setMetrics:(AMSUIPaymentVerificationMetrics *)arg1 ;
-(ACAccount *)account;
-(AMSUIPaymentVerificationMetrics *)metrics;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(UIViewController *)viewController;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)performTask;
-(NSString *)displayName;
-(ACAccount *)originalAccount;
-(NSDictionary *)accountParameters;
-(id)_promiseToLoadBooleanURL;
-(id)_promiseToPromptAfterCancel;
-(id)_promiseToFetchCardOnStackBooleanURL:(id)arg1 ;
-(id)_promiseToPromptBeforeBiometricAuth;
-(id)_promiseToLoadPVTURL;
-(id)_promiseToFetchCardOnStackTokenURL:(id)arg1 ;
-(id)initWithAccount:(id)arg1 accountParameters:(id)arg2 bag:(id)arg3 displayName:(id)arg4 metrics:(id)arg5 viewController:(id)arg6 ;
-(void)setAccountParameters:(NSDictionary *)arg1 ;
-(void)setOriginalAccount:(ACAccount *)arg1 ;
@end

