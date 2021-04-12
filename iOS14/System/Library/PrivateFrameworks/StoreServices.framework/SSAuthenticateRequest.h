/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLogConfig, UIViewController, NSString;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	SSLogConfig* _logConfig;
	UIViewController* __parentViewController;

}

@property (nonatomic,retain) SSLogConfig * logConfig;                                      //@synthesize logConfig=_logConfig - In the implementation block
@property (nonatomic,readonly) NSString * logUUID; 
@property (assign,nonatomic,__weak) UIViewController * _parentViewController;              //@synthesize _parentViewController=__parentViewController - In the implementation block
@property (assign,nonatomic) id<SSAuthenticateRequestDelegate> delegate; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)localAuthenticationAvailable;
+(BOOL)_isAuthkitEntitled;
+(id)_accountToAuthenticateWithAuthenticationContext:(id)arg1 ;
-(NSString *)logUUID;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)run;
-(id)init;
-(BOOL)start;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(SSLogConfig *)logConfig;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(UIViewController *)_parentViewController;
-(void)_handleDialogFromError:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(void)startWithAuthenticateResponseBlock:(/*^block*/id)arg1 ;
-(void)_performRemoteAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldRunAuthenticationForAccount:(id)arg1 ;
-(long long)_responseTypeForError:(id)arg1 ;
-(id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(BOOL)arg2 ;
-(void)set_parentViewController:(UIViewController *)arg1 ;
@end

