/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDXPCClient, HDProfile, HDClientAuthorizationOracle, HKHealthStoreConfiguration, NSString, _HKEntitlements, NSXPCConnection;

@interface HDHealthStoreClient : NSObject {

	HDXPCClient* _XPCClient;
	HDProfile* _profile;
	HDClientAuthorizationOracle* _authorizationOracle;
	HKHealthStoreConfiguration* _configuration;
	NSString* _sourceBundleIdentifier;
	NSString* _defaultSourceBundleIdentifier;

}

@property (readonly) HDXPCClient * XPCClient;                                        //@synthesize XPCClient=_XPCClient - In the implementation block
@property (readonly) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (readonly) _HKEntitlements * entitlements; 
@property (readonly) HDClientAuthorizationOracle * authorizationOracle;              //@synthesize authorizationOracle=_authorizationOracle - In the implementation block
@property (readonly) NSXPCConnection * connection; 
@property (copy,readonly) HKHealthStoreConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (copy,readonly) NSString * sourceBundleIdentifier;                         //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (copy,readonly) NSString * defaultSourceBundleIdentifier;                  //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
-(id)valueForEntitlement:(id)arg1 ;
-(NSXPCConnection *)connection;
-(_HKEntitlements *)entitlements;
-(HKHealthStoreConfiguration *)configuration;
-(HDProfile *)profile;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(BOOL)hasPrivateMetadataAccess;
-(NSString *)defaultSourceBundleIdentifier;
-(HDXPCClient *)XPCClient;
-(BOOL)hasRequiredEntitlement:(id)arg1 error:(id*)arg2 ;
-(HDClientAuthorizationOracle *)authorizationOracle;
-(id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3 ;
-(BOOL)shouldBypassAuthorization;
-(id)sourceVersionWithDaemon:(id)arg1 ;
-(BOOL)verifyHealthRecordsPermissionGrantedWithError:(id*)arg1 ;
-(id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2 ;
-(id)baseDataEntityEncodingOptions;
-(id)_watchKitAvailabilityFilter;
@end

