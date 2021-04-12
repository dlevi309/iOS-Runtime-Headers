/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKAccountOverrideInfo, NSString, CKUploadRequestConfiguration;

@interface CKContainerOptions : NSObject <NSSecureCoding> {

	BOOL _captureResponseHTTPHeaders;
	BOOL _useZoneWidePCS;
	BOOL _wantsSiloedContext;
	BOOL _returnPCSMetadata;
	BOOL _bypassPCSEncryption;
	BOOL _enforceNamedOperationGroups;
	BOOL _forceEnableReadOnlyManatee;
	CKAccountOverrideInfo* _accountInfoOverride;
	unsigned long long _mmcsEncryptionSupport;
	NSString* _encryptionServiceName;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSString* _personaIdentifier;

}

@property (nonatomic,retain) NSString * personaIdentifier;                                           //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                                        //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                                //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;                              //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                                 //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;                               //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,retain) NSString * encryptionServiceName;                                       //@synthesize encryptionServiceName=_encryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                                               //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL enforceNamedOperationGroups;                                       //@synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;              //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(NSString *)personaIdentifier;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(BOOL)returnPCSMetadata;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)captureResponseHTTPHeaders;
-(BOOL)wantsSiloedContext;
-(BOOL)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(BOOL)bypassPCSEncryption;
-(BOOL)forceEnableReadOnlyManatee;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(NSString *)encryptionServiceName;
-(BOOL)enforceNamedOperationGroups;
-(void)setUseMMCSEncryptionV2:(BOOL)arg1 ;
-(void)setEncryptionServiceName:(NSString *)arg1 ;
-(void)setEnforceNamedOperationGroups:(BOOL)arg1 ;
@end

