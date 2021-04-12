/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSUUID, NSArray, _LSLazyPropertyList, _LSBundleIDValidationToken, NSDictionary;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {

	NSString* _localizedShortName;
	BOOL _foundBackingBundle;
	BOOL _containerized;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _bundleExecutable;
	NSURL* _bundleContainerURL;
	NSString* _bundleVersion;
	NSString* _sdkVersion;
	NSString* _signerIdentity;
	NSString* _signerOrganization;
	NSUUID* _cacheGUID;
	unsigned long long _sequenceNumber;
	NSArray* _machOUUIDs;
	unsigned long long _compatibilityState;
	_LSLazyPropertyList* __infoDictionary;
	_LSLazyPropertyList* __entitlements;
	_LSLazyPropertyList* __environmentVariables;
	_LSBundleIDValidationToken* __validationToken;

}

@property (nonatomic,readonly) NSString * localizedShortName; 
@property (setter=_setInfoDictionary:,nonatomic,copy) _LSLazyPropertyList * _infoDictionary;                          //@synthesize _infoDictionary=__infoDictionary - In the implementation block
@property (nonatomic,copy) NSArray * machOUUIDs;                                                                      //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (setter=setSDKVersion:,nonatomic,copy) NSString * sdkVersion;                                               //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (setter=_setEntitlements:,nonatomic,copy) _LSLazyPropertyList * _entitlements;                              //@synthesize _entitlements=__entitlements - In the implementation block
@property (setter=_setEnvironmentVariables:,nonatomic,copy) _LSLazyPropertyList * _environmentVariables;              //@synthesize _environmentVariables=__environmentVariables - In the implementation block
@property (setter=_setValidationToken:,nonatomic,retain) _LSBundleIDValidationToken * _validationToken;               //@synthesize _validationToken=__validationToken - In the implementation block
@property (assign,setter=_setCompatibilityState:,nonatomic) unsigned long long compatibilityState;                    //@synthesize compatibilityState=_compatibilityState - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleType; 
@property (nonatomic,readonly) NSURL * bundleURL;                                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleExecutable;                                                           //@synthesize bundleExecutable=_bundleExecutable - In the implementation block
@property (nonatomic,readonly) NSString * canonicalExecutablePath; 
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSURL * bundleContainerURL;                                                            //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * appStoreReceiptURL; 
@property (nonatomic,readonly) NSString * bundleVersion;                                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                                                             //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) NSDictionary * groupContainerURLs; 
@property (nonatomic,readonly) BOOL foundBackingBundle;                                                               //@synthesize foundBackingBundle=_foundBackingBundle - In the implementation block
@property (getter=isContainerized,nonatomic,readonly) BOOL containerized;                                             //@synthesize containerized=_containerized - In the implementation block
@property (nonatomic,readonly) BOOL profileValidated; 
@property (nonatomic,readonly) BOOL UPPValidated; 
@property (nonatomic,readonly) BOOL freeProfileValidated; 
@property (nonatomic,readonly) NSString * signerOrganization;                                                         //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,readonly) NSUUID * cacheGUID;                                                                    //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)canInstantiateFromDatabase;
+(id)bundleProxyForCurrentProcess;
+(void)clearBundleProxyForCurrentProcess;
+(id)bundleProxyWithAuditToken:(SCD_Struct_LS15)arg1 error:(id*)arg2 ;
+(id)bundleProxyForIdentifier:(id)arg1 ;
+(id)bundleProxyForURL:(id)arg1 ;
+(id)bundleProxyForURL:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)entitlements;
-(NSString *)localizedShortName;
-(NSString *)bundleType;
-(_LSLazyPropertyList *)_entitlements;
-(NSURL *)dataContainerURL;
-(NSArray *)machOUUIDs;
-(id)localizedName;
-(NSURL *)bundleURL;
-(id)_managedPersonas;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(_LSBundleIDValidationToken *)_validationToken;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(_LSLazyPropertyList *)_infoDictionary;
-(id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2 ;
-(NSURL *)bundleContainerURL;
-(NSDictionary *)groupContainerURLs;
-(BOOL)_usesSystemPersona;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 ;
-(_LSLazyPropertyList *)_environmentVariables;
-(void)setSDKVersion:(id)arg1 ;
-(void)_setEntitlements:(id)arg1 ;
-(NSString *)signerIdentity;
-(void)setMachOUUIDs:(NSArray *)arg1 ;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(NSString *)bundleExecutable;
-(id)_initWithBundleUnit:(unsigned)arg1 context:(LSContext*)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11 ;
-(id)entitlementValuesForKeys:(id)arg1 ;
-(void)_setEnvironmentVariables:(id)arg1 ;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)objectsForInfoDictionaryKeys:(id)arg1 ;
-(NSURL *)appStoreReceiptURL;
-(BOOL)foundBackingBundle;
-(NSString *)signerOrganization;
-(void)_setValidationToken:(id)arg1 ;
-(id)_valueForEqualityTesting;
-(id)appStoreReceiptName;
-(void)_setInfoDictionary:(id)arg1 ;
-(BOOL)_hasAssociatedPersonas;
-(NSString *)canonicalExecutablePath;
-(void)_setCompatibilityState:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)sequenceNumber;
-(NSDictionary *)environmentVariables;
-(NSString *)bundleVersion;
-(NSUUID *)cacheGUID;
-(NSURL *)containerURL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isContainerized;
-(unsigned long long)compatibilityState;
-(NSString *)sdkVersion;
-(BOOL)isEqual:(id)arg1 ;
@end

