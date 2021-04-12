/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol SOHostExtensionContextProtocol;
@class SOAuthorizationRequestParameters, SOAuthorizationCredential, NSError, NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequest : NSObject {

	SOAuthorizationRequestParameters* _requestParameters;
	id<SOHostExtensionContextProtocol> _hostExtensionContext;
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
@property (nonatomic,retain) NSData * auditTokenData; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
@property (assign,getter=isCallerManaged,nonatomic) BOOL callerManaged; 
@property (nonatomic,retain) NSString * callerTeamIdentifier; 
@property (nonatomic,retain) NSString * localizedCallerDisplayName; 
-(NSString *)realm;
-(void)completeWithError:(id)arg1 ;
-(void)setCallerTeamIdentifier:(NSString *)arg1 ;
-(void)setLocalizedCallerDisplayName:(NSString *)arg1 ;
-(NSString *)callerBundleIdentifier;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)url;
-(NSData *)httpBody;
-(NSString *)callerTeamIdentifier;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSString *)localizedCallerDisplayName;
-(void)complete;
-(NSDictionary *)httpHeaders;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(BOOL)isCallerManaged;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)requestedOperation;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(NSData *)auditTokenData;
-(id)initWithRequestParameters:(id)arg1 hostExtensionContext:(id)arg2 ;
-(void)setAuthorizationCanceled:(BOOL)arg1 ;
-(void)setCanceledAuthorizationCredential:(SOAuthorizationCredential *)arg1 ;
-(void)setCanceledAuthorizationError:(NSError *)arg1 ;
-(SOAuthorizationCredential *)canceledAuthorizationCredential;
-(NSError *)canceledAuthorizationError;
-(void)setRealm:(NSString *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extensionData;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(BOOL)isAuthorizationCanceled;
-(BOOL)_isUserInterfaceAllowed;
-(void)doNotHandle;
-(void)cancel;
-(NSDictionary *)authorizationOptions;
-(void)setCallerManaged:(BOOL)arg1 ;
@end

