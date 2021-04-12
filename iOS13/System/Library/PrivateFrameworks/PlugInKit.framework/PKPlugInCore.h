/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@class NSString, NSURL, NSDictionary, NSUUID, NSData, NSDate;

@interface PKPlugInCore : NSObject {

	NSString* _identifier;
	NSString* _originalIdentifier;
	NSURL* _url;
	NSURL* _containingUrl;
	NSString* _containingBundleIdentifier;
	BOOL _onSystemVolume;
	NSDictionary* _bundleInfoDictionary;
	NSDictionary* _plugInDictionary;
	NSDictionary* _entitlements;
	unsigned long long _hubProtocolVersion;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSDictionary* _localizedFileProviderActionNames;
	NSDictionary* _annotations;
	long long _lastModified;
	NSUUID* _uuid;
	NSData* _cdhash;
	NSString* _requirement;
	NSURL* _dataContainerURL;
	NSUUID* _discoveryInstanceUUID;

}

@property (retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * originalIdentifier;                                  //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * bundleInfoDictionary;                            //@synthesize bundleInfoDictionary=_bundleInfoDictionary - In the implementation block
@property (retain) NSDictionary * plugInDictionary;                                //@synthesize plugInDictionary=_plugInDictionary - In the implementation block
@property (retain) NSDictionary * entitlements;                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (retain) NSDictionary * annotations;                                     //@synthesize annotations=_annotations - In the implementation block
@property (copy) NSURL * containingUrl;                                            //@synthesize containingUrl=_containingUrl - In the implementation block
@property (copy) NSString * containingBundleIdentifier;                            //@synthesize containingBundleIdentifier=_containingBundleIdentifier - In the implementation block
@property (readonly) BOOL oldStyle; 
@property (readonly) NSString * path; 
@property (readonly) NSString * containingPath; 
@property (assign) BOOL onSystemVolume;                                            //@synthesize onSystemVolume=_onSystemVolume - In the implementation block
@property (readonly) NSUUID * discoveryInstanceUUID;                               //@synthesize discoveryInstanceUUID=_discoveryInstanceUUID - In the implementation block
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSString * version; 
@property (readonly) id protocolSpec; 
@property (readonly) NSString * principalSpec; 
@property (assign) unsigned long long hubProtocolVersion;                          //@synthesize hubProtocolVersion=_hubProtocolVersion - In the implementation block
@property (readonly) NSString * sdkSpec; 
@property (readonly) NSString * localizedName;                                     //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) NSString * localizedShortName;                                //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (retain) NSString * localizedContainingName;                             //@synthesize localizedContainingName=_localizedContainingName - In the implementation block
@property (readonly) NSDictionary * localizedFileProviderActionNames;              //@synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames - In the implementation block
@property (assign) long long lastModified;                                         //@synthesize lastModified=_lastModified - In the implementation block
@property (readonly) NSDate * timestamp; 
@property (retain) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSData * cdhash;                                                //@synthesize cdhash=_cdhash - In the implementation block
@property (retain) NSString * requirement;                                         //@synthesize requirement=_requirement - In the implementation block
@property (readonly) BOOL isAppExtension; 
@property (readonly) BOOL isMultiplexed; 
@property (readonly) BOOL isHybrid; 
@property (readonly) BOOL isDedicated; 
@property (readonly) BOOL isData; 
@property (nonatomic,readonly) NSURL * dataContainerURL;                           //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
+(id)readSDKDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)attributes;
-(NSString *)path;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(NSURL *)url;
-(NSDictionary *)bundleInfoDictionary;
-(NSString *)localizedName;
-(NSString *)localizedShortName;
-(NSUUID *)uuid;
-(BOOL)useBundle:(id)arg1 error:(id*)arg2 ;
-(void)localizedInfoDictionaryForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)timestamp;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)originalIdentifier;
-(NSURL *)dataContainerURL;
-(NSDictionary *)entitlements;
-(NSString *)requirement;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)containingUrl;
-(NSString *)localizedContainingName;
-(void)setRequirement:(NSString *)arg1 ;
-(BOOL)isData;
-(NSDictionary *)annotations;
-(long long)lastModified;
-(id)initWithForm:(id)arg1 ;
-(void)setAnnotation:(id)arg1 value:(id)arg2 ;
-(void)updateFromForm:(id)arg1 ;
-(id)diagnose;
-(id)infoKey:(id)arg1 ;
-(id)protocolSpec;
-(id)augmentInterface:(id)arg1 ;
-(unsigned long long)hubProtocolVersion;
-(BOOL)onSystemVolume;
-(NSDictionary *)plugInDictionary;
-(NSDictionary *)localizedFileProviderActionNames;
-(BOOL)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6 ;
-(BOOL)setupWithForm:(id)arg1 ;
-(id)normalizeInfoDictionary:(id)arg1 ;
-(id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(BOOL)setDictionaries:(id)arg1 ;
-(void)canonicalize;
-(NSUUID *)discoveryInstanceUUID;
-(void)setHubProtocolVersion:(unsigned long long)arg1 ;
-(void)setOriginalIdentifier:(NSString *)arg1 ;
-(void)setCdhash:(NSData *)arg1 ;
-(void)setLastModified:(long long)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(void)setContainingUrl:(NSURL *)arg1 ;
-(void)setContainingBundleIdentifier:(NSString *)arg1 ;
-(void)setOnSystemVolume:(BOOL)arg1 ;
-(void)setAnnotations:(NSDictionary *)arg1 ;
-(void)setLocalizedContainingName:(NSString *)arg1 ;
-(void)setPlugInDictionary:(NSDictionary *)arg1 ;
-(id)attribute:(id)arg1 ;
-(id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2 ;
-(id)sdkOnlyKeyPaths;
-(id)mergeSharedResources:(id)arg1 into:(id)arg2 ;
-(NSString *)containingPath;
-(NSString *)containingBundleIdentifier;
-(BOOL)isAppExtension;
-(NSString *)principalSpec;
-(id)pluginKey:(id)arg1 ;
-(BOOL)isHybrid;
-(void)_loadLocalizedNames;
-(id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2 ;
-(id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6 ;
-(id)export:(id*)arg1 ;
-(BOOL)oldStyle;
-(NSString *)sdkSpec;
-(id)embeddedCodePath;
-(id)embeddedProtocolSpec;
-(BOOL)isMultiplexed;
-(BOOL)isDedicated;
-(void)setBundleInfoDictionary:(NSDictionary *)arg1 ;
-(NSData *)cdhash;
@end

