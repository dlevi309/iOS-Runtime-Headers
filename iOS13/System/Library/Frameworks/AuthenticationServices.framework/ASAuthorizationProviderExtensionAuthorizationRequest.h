/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(NSURL *)url;
-(void)complete;
-(NSString *)realm;
-(void)completeWithError:(id)arg1 ;
-(SOAuthorizationRequest *)authorizationRequest;
-(NSData *)httpBody;
-(NSDictionary *)httpHeaders;
-(NSDictionary *)authorizationOptions;
-(NSString *)requestedOperation;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)extensionData;
-(NSString *)callerBundleIdentifier;
-(id)initWithAuthorizationRequest:(id)arg1 ;
@end

