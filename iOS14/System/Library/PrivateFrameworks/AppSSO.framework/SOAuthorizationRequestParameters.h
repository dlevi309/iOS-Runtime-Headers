/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequestParameters : NSObject <NSSecureCoding> {

	BOOL _useInternalExtensions;
	BOOL _callerManaged;
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
	NSString* _callerTeamIdentifier;
	NSString* _localizedCallerDisplayName;

}

@property (nonatomic,copy) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * requestedOperation;                            //@synthesize requestedOperation=_requestedOperation - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                               //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy) NSData * httpBody;                                        //@synthesize httpBody=_httpBody - In the implementation block
@property (nonatomic,copy) NSString * realm;                                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,copy) NSDictionary * extensionData;                             //@synthesize extensionData=_extensionData - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                                //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,copy) NSString * callerBundleIdentifier;                        //@synthesize callerBundleIdentifier=_callerBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * authorizationOptions;                    //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
@property (assign,nonatomic) BOOL useInternalExtensions;                             //@synthesize useInternalExtensions=_useInternalExtensions - In the implementation block
@property (assign,nonatomic) long long responseCode;                                 //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,getter=isCallerManaged,nonatomic) BOOL callerManaged;              //@synthesize callerManaged=_callerManaged - In the implementation block
@property (nonatomic,copy) NSString * callerTeamIdentifier;                          //@synthesize callerTeamIdentifier=_callerTeamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedCallerDisplayName;                    //@synthesize localizedCallerDisplayName=_localizedCallerDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)realm;
-(void)setCallerTeamIdentifier:(NSString *)arg1 ;
-(void)setLocalizedCallerDisplayName:(NSString *)arg1 ;
-(void)setResponseCode:(long long)arg1 ;
-(NSString *)callerBundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(id)initWithAuthorizationRequestParametersCore:(id)arg1 ;
-(NSURL *)url;
-(NSData *)httpBody;
-(NSString *)callerTeamIdentifier;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(BOOL)useInternalExtensions;
-(NSString *)localizedCallerDisplayName;
-(id)description;
-(NSDictionary *)httpHeaders;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(BOOL)isCallerManaged;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)requestedOperation;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)auditTokenData;
-(void)setRealm:(NSString *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extensionData;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(NSDictionary *)authorizationOptions;
-(void)setCallerManaged:(BOOL)arg1 ;
-(long long)responseCode;
@end

