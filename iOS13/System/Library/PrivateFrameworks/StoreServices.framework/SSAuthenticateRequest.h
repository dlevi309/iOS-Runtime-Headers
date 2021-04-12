/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)_isAuthkitEntitled;
+(id)_accountToAuthenticateWithAuthenticationContext:(id)arg1 ;
+(BOOL)localAuthenticationAvailable;
-(id)init;
-(id)run;
-(BOOL)start;
-(id)initWithAccount:(id)arg1 ;
-(UIViewController *)_parentViewController;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(void)startWithAuthenticateResponseBlock:(/*^block*/id)arg1 ;
-(SSLogConfig *)logConfig;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)logUUID;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_performRemoteAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldRunAuthenticationForAccount:(id)arg1 ;
-(id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(BOOL)arg2 ;
-(void)_handleDialogFromError:(id)arg1 ;
-(long long)_responseTypeForError:(id)arg1 ;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(void)set_parentViewController:(UIViewController *)arg1 ;
@end

