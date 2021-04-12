/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainerID, NSString, CKAccountOverrideInfo, NSDictionary;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _captureResponseHTTPHeaders;
	BOOL _wantsSiloedContext;
	BOOL _useZoneWidePCS;
	BOOL _holdAllOperations;
	BOOL _returnPCSMetadata;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _masqueradeAsThirdPartyApp;
	unsigned _clientSDKVersion;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKAccountOverrideInfo* _accountInfoOverride;
	NSDictionary* _fakeEntitlements;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _containerEncryptionServiceName;
	NSString* _personaIdentifier;

}

@property (nonatomic,retain) CKContainerID * containerID;                               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) CKAccountOverrideInfo * accountInfoOverride;               //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                           //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                   //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                       //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,retain) NSDictionary * fakeEntitlements;                           //@synthesize fakeEntitlements=_fakeEntitlements - In the implementation block
@property (assign,nonatomic) BOOL holdAllOperations;                                    //@synthesize holdAllOperations=_holdAllOperations - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                    //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                  //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;                 //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                                  //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                           //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                 //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic) BOOL masqueradeAsThirdPartyApp;                            //@synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                              //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(NSString *)personaIdentifier;
-(CKContainerID *)containerID;
-(BOOL)returnPCSMetadata;
-(NSString *)sourceApplicationBundleIdentifier;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(BOOL)wantsSiloedContext;
-(BOOL)useZoneWidePCS;
-(NSDictionary *)fakeEntitlements;
-(BOOL)holdAllOperations;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(BOOL)bypassPCSEncryption;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned)clientSDKVersion;
-(BOOL)masqueradeAsThirdPartyApp;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setFakeEntitlements:(NSDictionary *)arg1 ;
-(void)setHoldAllOperations:(BOOL)arg1 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(void)setMasqueradeAsThirdPartyApp:(BOOL)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
@end

