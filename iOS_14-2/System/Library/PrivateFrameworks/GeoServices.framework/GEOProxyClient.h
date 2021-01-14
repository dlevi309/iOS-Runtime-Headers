/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, GEOApplicationAuditToken;

@interface GEOProxyClient : NSObject {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	GEOApplicationAuditToken* _auditToken;
	BOOL _isApplication;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL isApplication;                                 //@synthesize isApplication=_isApplication - In the implementation block
+(id)compositeClientForClients:(id)arg1 ;
+(id)currentClient;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithAuditToken:(id)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(NSString *)bundleVersion;
-(BOOL)isApplication;
-(id)description;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)URLConnectionProperties;
-(unsigned long long)hash;
-(void)setIsApplication:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

