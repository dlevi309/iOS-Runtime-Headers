/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class NSString, RBSProcessIdentity, NSUUID;

@interface RBLaunchdProperties : NSObject {

	long long _type;
	NSString* _path;
	int _hostPid;
	BOOL _multiInstance;
	BOOL _systemShell;
	BOOL _variableEUID;
	unsigned char _overrideManageFlags;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _executablePath;
	int _requestedJetsamPriority;
	BOOL _doesOverrideManagement;
	NSString* _underlyingAssertion;
	RBSProcessIdentity* _specifiedIdentity;
	NSString* _beforeTranslocationBundlePath;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;
	NSUUID* _uuid;

}

@property (getter=isXPCService,nonatomic,readonly) BOOL XPCService; 
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (getter=isMultiInstance,nonatomic,readonly) BOOL multiInstance;                //@synthesize multiInstance=_multiInstance - In the implementation block
@property (getter=isSystemShell,nonatomic,readonly) BOOL systemShell;                    //@synthesize systemShell=_systemShell - In the implementation block
@property (getter=hasVariableEUID,nonatomic,readonly) BOOL variableEUID;                 //@synthesize variableEUID=_variableEUID - In the implementation block
@property (nonatomic,readonly) BOOL doesOverrideManagement;                              //@synthesize doesOverrideManagement=_doesOverrideManagement - In the implementation block
@property (nonatomic,readonly) unsigned char overrideManageFlags;                        //@synthesize overrideManageFlags=_overrideManageFlags - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * jobLabel;                                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                                //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * path;                                          //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int hostPid;                                              //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                              //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSString * underlyingAssertion;                           //@synthesize underlyingAssertion=_underlyingAssertion - In the implementation block
@property (nonatomic,readonly) NSString * beforeTranslocationBundlePath;                 //@synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeDirectory;                            //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * tmpDirectory;                             //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * specifiedIdentity;              //@synthesize specifiedIdentity=_specifiedIdentity - In the implementation block
+(id)propertiesForPid:(int)arg1 ;
-(int)requestedJetsamPriority;
-(BOOL)isDaemon;
-(void)_parseLASSProperties:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)tmpDirectory;
-(BOOL)isSystemShell;
-(NSString *)executablePath;
-(NSString *)jobLabel;
-(NSString *)homeDirectory;
-(id)_initDaemonWithProperties:(id)arg1 path:(id)arg2 ;
-(RBSProcessIdentity *)specifiedIdentity;
-(unsigned char)overrideManageFlags;
-(NSString *)path;
-(BOOL)isMultiInstance;
-(void)_parseAdditionalProperties:(id)arg1 ;
-(BOOL)doesOverrideManagement;
-(BOOL)isXPCService;
-(BOOL)hasVariableEUID;
-(void)_parseDaemonProperties;
-(int)hostPid;
-(id)_initXPCServiceWithProperties:(id)arg1 path:(id)arg2 HostPid:(int)arg3 ;
-(NSString *)underlyingAssertion;
-(NSString *)bundleID;
-(id)_initAppWithProperties:(id)arg1 ;
-(NSString *)beforeTranslocationBundlePath;
-(BOOL)_parseDaemonPlist:(id)arg1 ;
@end

