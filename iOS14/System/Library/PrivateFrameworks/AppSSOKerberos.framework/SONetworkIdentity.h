/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@protocol OS_nw_path;
@class NSString, NSObject, NSData;

@interface SONetworkIdentity : NSObject {

	NSString* _networkFingerprint;
	NSString* _realm;
	NSString* _bundleIdentifier;
	NSObject*<OS_nw_path> _lastpath;
	NSData* _auditToken;

}

@property (nonatomic,retain) NSString * realm;                            //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * networkFingerprint;               //@synthesize networkFingerprint=_networkFingerprint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> lastpath;              //@synthesize lastpath=_lastpath - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
-(NSString *)realm;
-(void)setAuditToken:(NSData *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSData *)auditToken;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(NSString *)networkFingerprint;
-(void)determineNetworkFingerprint;
-(NSObject*<OS_nw_path>)lastpath;
-(void)setLastpath:(NSObject*<OS_nw_path>)arg1 ;
-(void)setNetworkFingerprint:(NSString *)arg1 ;
-(id)getVPNServerSignature:(id)arg1 ;
-(id)getInterfaceSignature:(id)arg1 ;
-(id)getInterfaceFingerprintForDynamicInterface:(const char*)arg1 ;
-(id)initForRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3 ;
@end

