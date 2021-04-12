/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKContainerID;

@interface CKDAppContainerTuple : NSObject <NSCopying> {

	BOOL _useZoneWidePCS;
	BOOL _bypassPCSEncryption;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _wantsSiloedContext;
	NSString* _applicationBundleID;
	NSString* _sourceApplicationBundleID;
	CKContainerID* _containerID;
	NSString* _applicationContainerPath;
	NSString* _personaID;
	NSString* _containerEncryptionServiceName;
	unsigned long long _mmcsEncryptionSupport;

}

@property (assign,nonatomic) unsigned long long mmcsEncryptionSupport;               //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleID;                       //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplicationBundleID;                 //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * applicationContainerPath;                  //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                                 //@synthesize personaID=_personaID - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                               //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (nonatomic,retain) NSString * containerEncryptionServiceName;              //@synthesize containerEncryptionServiceName=_containerEncryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(NSString *)personaID;
-(NSString *)applicationBundleID;
-(CKContainerID *)containerID;
-(id)CKPropertiesDescription;
-(BOOL)wantsSiloedContext;
-(BOOL)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(NSString *)containerEncryptionServiceName;
-(BOOL)bypassPCSEncryption;
-(BOOL)forceEnableReadOnlyManatee;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(void)setMmcsEncryptionSupport:(unsigned long long)arg1 ;
-(void)setContainerEncryptionServiceName:(NSString *)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3 personaID:(id)arg4 ;
-(NSString *)applicationContainerPath;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 applicationContainerPath:(id)arg3 containerID:(id)arg4 personaID:(id)arg5 ;
-(id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3 ;
@end

