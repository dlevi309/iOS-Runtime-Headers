/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary;

@interface ASAutodiscoverV2Task : ASTask {

	NSString* _emailAddress;
	NSMutableDictionary* _accountInfo;
	BOOL _addEmptyBearer;
	BOOL _discoverOAuthEndpoint;
	NSString* _easEndPoint;

}
-(id)_url;
-(id)contentType;
-(void)finishWithError:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)timeoutInterval;
-(void)loadRequest:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(BOOL)processContext:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(id)_OAuthURLFromResponseData:(id)arg1 ;
@end

