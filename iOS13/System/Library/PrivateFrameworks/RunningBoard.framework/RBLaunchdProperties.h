/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class NSString;

@interface RBLaunchdProperties : NSObject {

	long long _type;
	BOOL _multiInstance;
	BOOL _systemShell;
	BOOL _variableEUID;
	unsigned char _overrideManageFlags;
	BOOL _doesOverrideManagement;
	int _hostPid;
	int _requestedJetsamPriority;
	NSString* _path;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _executablePath;
	NSString* _underlyingAssertion;

}

@property (getter=isXPCService,nonatomic,readonly) BOOL XPCService; 
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (getter=isMultiInstance,nonatomic,readonly) BOOL multiInstance;              //@synthesize multiInstance=_multiInstance - In the implementation block
@property (getter=isSystemShell,nonatomic,readonly) BOOL systemShell;                  //@synthesize systemShell=_systemShell - In the implementation block
@property (getter=hasVariableEUID,nonatomic,readonly) BOOL variableEUID;               //@synthesize variableEUID=_variableEUID - In the implementation block
@property (nonatomic,readonly) BOOL doesOverrideManagement;                            //@synthesize doesOverrideManagement=_doesOverrideManagement - In the implementation block
@property (nonatomic,readonly) unsigned char overrideManageFlags;                      //@synthesize overrideManageFlags=_overrideManageFlags - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * jobLabel;                                    //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                              //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * path;                                        //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int hostPid;                                            //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                            //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSString * underlyingAssertion;                         //@synthesize underlyingAssertion=_underlyingAssertion - In the implementation block
+(id)propertiesForPid:(int)arg1 ;
-(NSString *)path;
-(NSString *)executablePath;
-(NSString *)bundleID;
-(BOOL)isDaemon;
-(BOOL)isXPCService;
-(BOOL)isMultiInstance;
-(NSString *)jobLabel;
-(NSString *)underlyingAssertion;
-(BOOL)isSystemShell;
-(BOOL)doesOverrideManagement;
-(unsigned char)overrideManageFlags;
-(int)requestedJetsamPriority;
-(void)_parseLASSProperties:(id)arg1 ;
-(void)_parseAdditionalProperties:(id)arg1 ;
-(void)_parseDaemonProperties;
-(BOOL)_parseDaemonPlist:(id)arg1 ;
-(id)_initXPCServiceWithProperties:(id)arg1 path:(id)arg2 HostPid:(int)arg3 ;
-(id)_initDaemonWithProperties:(id)arg1 path:(id)arg2 ;
-(id)_initAppWithProperties:(id)arg1 ;
-(int)hostPid;
-(BOOL)hasVariableEUID;
@end

