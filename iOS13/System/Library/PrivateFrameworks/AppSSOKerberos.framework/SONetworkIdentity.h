/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@protocol OS_nw_path;
@class NSString, NSObject;

@interface SONetworkIdentity : NSObject {

	NSString* _networkFingerprint;
	NSString* _realm;
	NSString* _bundleIdentifier;
	NSObject*<OS_nw_path> _lastpath;

}

@property (nonatomic,retain) NSString * realm;                            //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * networkFingerprint;               //@synthesize networkFingerprint=_networkFingerprint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> lastpath;              //@synthesize lastpath=_lastpath - In the implementation block
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(NSString *)networkFingerprint;
-(void)determineNetworkFingerprint;
-(NSObject*<OS_nw_path>)lastpath;
-(void)setLastpath:(NSObject*<OS_nw_path>)arg1 ;
-(void)setNetworkFingerprint:(NSString *)arg1 ;
-(id)getVPNServerSignature:(id)arg1 ;
-(id)getInterfaceSignature:(id)arg1 ;
-(id)initForRealm:(id)arg1 andBundleIdentifier:(id)arg2 ;
@end

