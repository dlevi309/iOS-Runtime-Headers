/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2 dialogResponse:(id)arg3 ;
+(id)_performAuthRequest:(id)arg1 redirectURL:(id)arg2 taskInfo:(id)arg3 ;
+(id)_handleAuthenticateResult:(id)arg1 redirectURL:(id)arg2 error:(id)arg3 ;
+(id)performAuthForTypesFromResponse:(id)arg1 taskInfo:(id)arg2 ;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dialogDictionary;
-(id)performWithTaskInfo:(id)arg1 ;
-(AMSFinanceDialogResponse *)dialogResponse;
-(id)_locateActionableButtonUsingDialogResponse:(id)arg1 ;
-(AMSAuthenticateRequest *)authenticateRequest;
-(id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2 ;
@end

