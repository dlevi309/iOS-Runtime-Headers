/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDXPCClient, HDProfile, HDClientAuthorizationOracle, HKHealthStoreConfiguration, NSString, _HKEntitlements, NSXPCConnection, HDXPCProcess;

@interface HDHealthStoreClient : NSObject {

	HDXPCClient* _XPCClient;
	HDProfile* _profile;
	HDClientAuthorizationOracle* _authorizationOracle;
	HKHealthStoreConfiguration* _configuration;
	NSString* _sourceBundleIdentifier;
	NSString* _sourceVersion;
	NSString* _defaultSourceBundleIdentifier;

}

@property (readonly) HDXPCClient * XPCClient;                                        //@synthesize XPCClient=_XPCClient - In the implementation block
@property (readonly) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (readonly) _HKEntitlements * entitlements; 
@property (readonly) HDClientAuthorizationOracle * authorizationOracle;              //@synthesize authorizationOracle=_authorizationOracle - In the implementation block
@property (readonly) NSXPCConnection * connection; 
@property (readonly) HDXPCProcess * process; 
@property (copy,readonly) HKHealthStoreConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (copy,readonly) NSString * sourceBundleIdentifier;                         //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (copy,readonly) NSString * sourceVersion;                                  //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (copy,readonly) NSString * defaultSourceBundleIdentifier;                  //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
-(HDXPCProcess *)process;
-(_HKEntitlements *)entitlements;
-(NSString *)sourceBundleIdentifier;
-(BOOL)hasPrivateMetadataAccess;
-(BOOL)shouldBypassAuthorization;
-(BOOL)hasRequiredEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)sourceVersion;
-(HDClientAuthorizationOracle *)authorizationOracle;
-(HDXPCClient *)XPCClient;
-(HKHealthStoreConfiguration *)configuration;
-(NSXPCConnection *)connection;
-(HDProfile *)profile;
-(id)baseDataEntityEncodingOptions;
-(BOOL)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id*)arg3 ;
-(id)_watchKitAvailabilityFilterForSampleType:(id)arg1 ;
-(BOOL)verifyHealthRecordsPermissionGrantedWithError:(id*)arg1 ;
-(NSString *)defaultSourceBundleIdentifier;
-(BOOL)hasArrayEntitlement:(id)arg1 containing:(id)arg2 ;
-(id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2 ;
@end

