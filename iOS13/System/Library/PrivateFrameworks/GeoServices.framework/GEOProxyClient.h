/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)currentClient;
+(id)compositeClientForClients:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOApplicationAuditToken *)auditToken;
-(NSString *)bundleIdentifier;
-(id)initWithXPCConnection:(id)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(BOOL)isApplication;
-(void)setIsApplication:(BOOL)arg1 ;
-(id)URLConnectionProperties;
@end

