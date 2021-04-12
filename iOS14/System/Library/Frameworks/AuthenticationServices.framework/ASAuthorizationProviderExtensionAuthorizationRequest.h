/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@class SOAuthorizationRequest, NSURL, NSString, NSDictionary, NSData;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject {

	SOAuthorizationRequest* _authorizationRequest;

}

@property (nonatomic,readonly) SOAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * requestedOperation; 
@property (nonatomic,readonly) NSDictionary * httpHeaders; 
@property (nonatomic,readonly) NSData * httpBody; 
@property (nonatomic,copy,readonly) NSString * realm; 
@property (nonatomic,readonly) NSDictionary * extensionData; 
@property (nonatomic,copy,readonly) NSString * callerBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * authorizationOptions; 
@property (getter=isCallerManaged,nonatomic,readonly) BOOL callerManaged; 
@property (nonatomic,readonly) NSString * callerTeamIdentifier; 
@property (nonatomic,readonly) NSString * localizedCallerDisplayName; 
-(NSString *)realm;
-(void)completeWithError:(id)arg1 ;
-(NSString *)callerBundleIdentifier;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)url;
-(NSData *)httpBody;
-(NSString *)callerTeamIdentifier;
-(NSString *)localizedCallerDisplayName;
-(void)complete;
-(NSDictionary *)httpHeaders;
-(BOOL)isCallerManaged;
-(NSString *)requestedOperation;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(SOAuthorizationRequest *)authorizationRequest;
-(NSDictionary *)extensionData;
-(void)doNotHandle;
-(void)cancel;
-(NSDictionary *)authorizationOptions;
@end

