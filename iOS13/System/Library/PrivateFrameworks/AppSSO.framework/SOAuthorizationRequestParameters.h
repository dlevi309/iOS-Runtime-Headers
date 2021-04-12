/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequestParameters : NSObject <NSSecureCoding> {

	BOOL _useInternalExtensions;
	NSURL* _url;
	NSString* _requestedOperation;
	NSDictionary* _httpHeaders;
	NSData* _httpBody;
	NSString* _realm;
	NSDictionary* _extensionData;
	NSData* _auditTokenData;
	NSString* _callerBundleIdentifier;
	NSDictionary* _authorizationOptions;
	long long _responseCode;

}

@property (nonatomic,copy) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * requestedOperation;                      //@synthesize requestedOperation=_requestedOperation - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                         //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy) NSData * httpBody;                                  //@synthesize httpBody=_httpBody - In the implementation block
@property (nonatomic,copy) NSString * realm;                                   //@synthesize realm=_realm - In the implementation block
@property (nonatomic,copy) NSDictionary * extensionData;                       //@synthesize extensionData=_extensionData - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                          //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,copy) NSString * callerBundleIdentifier;                  //@synthesize callerBundleIdentifier=_callerBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * authorizationOptions;              //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
@property (assign,nonatomic) BOOL useInternalExtensions;                       //@synthesize useInternalExtensions=_useInternalExtensions - In the implementation block
@property (assign,nonatomic) long long responseCode;                           //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(NSData *)httpBody;
-(NSData *)auditTokenData;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)authorizationOptions;
-(NSString *)requestedOperation;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(NSDictionary *)extensionData;
-(NSString *)callerBundleIdentifier;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(BOOL)useInternalExtensions;
-(id)initWithAuthorizationRequestParametersCore:(id)arg1 ;
@end

