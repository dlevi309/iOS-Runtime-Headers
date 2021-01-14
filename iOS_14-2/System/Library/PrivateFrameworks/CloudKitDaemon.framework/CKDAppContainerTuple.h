/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDApplicationID, CKContainerID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying> {

	BOOL _useZoneWidePCS;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _wantsSiloedContext;
	CKDApplicationID* _applicationID;
	CKContainerID* _containerID;
	NSString* _applicationContainerPath;
	NSString* _personaID;
	NSString* _containerEncryptionServiceName;
	unsigned long long _mmcsEncryptionSupport;

}

@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;               //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,readonly) CKDApplicationID * applicationID;                     //@synthesize applicationID=_applicationID - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * applicationContainerPath;                  //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                                 //@synthesize personaID=_personaID - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                               //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;              //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(CKDApplicationID *)applicationID;
-(BOOL)bypassPCSEncryption;
-(NSString *)applicationContainerPath;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(BOOL)forceEnableReadOnlyManatee;
-(unsigned long long)mmcsEncryptionSupport;
-(BOOL)wantsSiloedContext;
-(NSString *)containerEncryptionServiceName;
-(CKContainerID *)containerID;
-(BOOL)useZoneWidePCS;
-(id)CKPropertiesDescription;
-(NSString *)personaID;
-(id)description;
-(id)initWithApplicationID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 ;
-(id)initWithApplicationID:(id)arg1 applicationContainerPath:(id)arg2 containerID:(id)arg3 personaID:(id)arg4 ;
-(unsigned long long)hash;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

