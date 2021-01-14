/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)contentType;
-(double)timeoutInterval;
-(void)loadRequest:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
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

