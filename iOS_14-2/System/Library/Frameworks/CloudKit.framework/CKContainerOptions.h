/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKAccountOverrideInfo, NSString, CKUploadRequestConfiguration;

@interface CKContainerOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _captureResponseHTTPHeaders;
	BOOL _useZoneWidePCS;
	BOOL _bypassPCSEncryption;
	BOOL _enforceNamedOperationGroups;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _useClearAssetEncryption;
	BOOL _accountInfoCacheIsDisabled;
	BOOL _wantsSiloedContext;
	BOOL _returnPCSMetadata;
	CKAccountOverrideInfo* _accountInfoOverride;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _encryptionServiceName;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSString* _personaIdentifier;

}

@property (assign,nonatomic) BOOL wantsSiloedContext;                                                         //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                                          //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;                       //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                                                    //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                                                 //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                                             //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;                                       //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                                        //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,copy) NSString * encryptionServiceName;                                                  //@synthesize encryptionServiceName=_encryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                                                        //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL enforceNamedOperationGroups;                                                //@synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                                                 //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) BOOL useClearAssetEncryption;                                                    //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (assign,nonatomic) BOOL accountInfoCacheIsDisabled;                                                 //@synthesize accountInfoCacheIsDisabled=_accountInfoCacheIsDisabled - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(BOOL)bypassPCSEncryption;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned long long)mmcsEncryptionSupport;
-(BOOL)wantsSiloedContext;
-(void)setAccountInfoCacheIsDisabled:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(NSString *)personaIdentifier;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)setEncryptionServiceName:(NSString *)arg1 ;
-(id)init;
-(BOOL)returnPCSMetadata;
-(BOOL)useZoneWidePCS;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setEnforceNamedOperationGroups:(BOOL)arg1 ;
-(void)setUseClearAssetEncryption:(BOOL)arg1 ;
-(BOOL)useClearAssetEncryption;
-(BOOL)accountInfoCacheIsDisabled;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(BOOL)enforceNamedOperationGroups;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(void)setUseMMCSEncryptionV2:(BOOL)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(BOOL)captureResponseHTTPHeaders;
-(NSString *)encryptionServiceName;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
@end

