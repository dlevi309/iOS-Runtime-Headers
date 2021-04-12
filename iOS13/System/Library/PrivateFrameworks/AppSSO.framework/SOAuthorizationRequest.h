/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class SOAuthorizationRequestParameters, SORemoteExtensionContext, SOAuthorizationCredential, NSError, NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequest : NSObject {

	SOAuthorizationRequestParameters* _requestParameters;
	SORemoteExtensionContext* _remoteExtensionContext;
	BOOL _authorizationCanceled;
	SOAuthorizationCredential* _canceledAuthorizationCredential;
	NSError* _canceledAuthorizationError;

}

@property (assign,getter=isAuthorizationCanceled,nonatomic) BOOL authorizationCanceled;                //@synthesize authorizationCanceled=_authorizationCanceled - In the implementation block
@property (nonatomic,retain) SOAuthorizationCredential * canceledAuthorizationCredential;              //@synthesize canceledAuthorizationCredential=_canceledAuthorizationCredential - In the implementation block
@property (nonatomic,retain) NSError * canceledAuthorizationError;                                     //@synthesize canceledAuthorizationError=_canceledAuthorizationError - In the implementation block
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * requestedOperation; 
@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (nonatomic,retain) NSData * httpBody; 
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSDictionary * extensionData; 
@property (nonatomic,retain) NSString * callerBundleIdentifier; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
-(void)cancel;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)complete;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)completeWithError:(id)arg1 ;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(NSData *)httpBody;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(id)_hostExtensionContext;
-(NSDictionary *)authorizationOptions;
-(NSString *)requestedOperation;
-(void)doNotHandle;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)extensionData;
-(NSString *)callerBundleIdentifier;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(id)initWithRequestParameters:(id)arg1 remoteExtensionContext:(id)arg2 ;
-(void)setAuthorizationCanceled:(BOOL)arg1 ;
-(void)setCanceledAuthorizationCredential:(SOAuthorizationCredential *)arg1 ;
-(void)setCanceledAuthorizationError:(NSError *)arg1 ;
-(SOAuthorizationCredential *)canceledAuthorizationCredential;
-(NSError *)canceledAuthorizationError;
-(BOOL)isAuthorizationCanceled;
-(BOOL)_isUserInterfaceAllowed;
@end

