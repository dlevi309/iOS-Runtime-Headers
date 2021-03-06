/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {

	NSString* _serverURL;
	NSString* _emailAddress;
	NSString* _redirectEmail;
	NSString* _authUsername;
	NSMutableDictionary* _accountInfo;
	NSError* _discoveryError;
	BOOL _wasRedirectedThroughHTTP;
	NSString* _originalURLScheme;

}

@property (nonatomic,retain) NSString * originalURLScheme;               //@synthesize originalURLScheme=_originalURLScheme - In the implementation block
@property (assign,nonatomic) BOOL wasRedirectedThroughHTTP;              //@synthesize wasRedirectedThroughHTTP=_wasRedirectedThroughHTTP - In the implementation block
-(id)_url;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)contentType;
-(double)timeoutInterval;
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(void)_handleErrorNode:(xmlNode*)arg1 ;
-(void)_handleServerNode:(xmlNode*)arg1 ;
-(void)_handleActionNode:(xmlNode*)arg1 ;
-(void)_handleUserNode:(xmlNode*)arg1 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3 ;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(NSString *)originalURLScheme;
-(void)setOriginalURLScheme:(NSString *)arg1 ;
-(BOOL)wasRedirectedThroughHTTP;
-(void)setWasRedirectedThroughHTTP:(BOOL)arg1 ;
@end

