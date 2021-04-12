/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class AMSAuthenticateRequest, NSDictionary, AMSFinanceDialogResponse, NSString;

@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable> {

	AMSAuthenticateRequest* _authenticateRequest;
	NSDictionary* _dialogDictionary;
	AMSFinanceDialogResponse* _dialogResponse;

}

@property (nonatomic,retain) NSDictionary * dialogDictionary;                             //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (nonatomic,readonly) AMSFinanceDialogResponse * dialogResponse;                 //@synthesize dialogResponse=_dialogResponse - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateRequest * authenticateRequest;              //@synthesize authenticateRequest=_authenticateRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_presentAuthRequest:(id)arg1 taskInfo:(id)arg2 ;
+(unsigned long long)authenticationTypeForResponse:(id)arg1 responseDictionary:(id)arg2 ;
+(id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2 dialogResponse:(id)arg3 ;
+(id)_performAuthRequest:(id)arg1 actionResult:(id)arg2 redirectURL:(id)arg3 taskInfo:(id)arg4 ;
+(void)_handleDialogFromAuthError:(id)arg1 taskInfo:(id)arg2 ;
+(void)_updateTaskWithAuthedAccount:(id)arg1 taskInfo:(id)arg2 ;
+(void)_updateTaskWithLastCredentialSource:(id)arg1 taskInfo:(id)arg2 ;
+(id)performAuthFromResponse:(id)arg1 taskInfo:(id)arg2 ;
-(id)performWithTaskInfo:(id)arg1 ;
-(AMSAuthenticateRequest *)authenticateRequest;
-(AMSFinanceDialogResponse *)dialogResponse;
-(id)_locateActionableButtonUsingDialogResponse:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2 ;
-(NSDictionary *)dialogDictionary;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
@end

