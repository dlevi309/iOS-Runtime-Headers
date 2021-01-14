/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSUUID, RBSProcessIdentity, RBProcess, NSNumber;

@interface RBSLaunchContext : NSObject <RBSXPCSecureCoding, NSCopying> {

	BOOL _lsManageRoleOnly;
	BOOL _forceSubmit;
	unsigned char _initialRole;
	unsigned char _spawnType;
	unsigned short _lsUMask;
	unsigned _lsPersona;
	int _hostPid;
	unsigned long long _lsSpawnFlags;
	NSArray* _lsBinpref;
	NSString* _bundleIdentifier;
	NSDictionary* _extensionOverlay;
	NSUUID* _oneShotUUID;
	NSString* _standardOutputPath;
	NSString* _standardErrorPath;
	NSString* _standardInPath;
	NSString* _beforeTranslocationBundlePath;
	NSString* _homeDirectory;
	NSString* _tmpDirectory;
	RBSProcessIdentity* _identity;
	NSArray* _arguments;
	unsigned long long _executionOptions;
	NSArray* _attributes;
	NSString* _explanation;
	NSString* _managedPersona;
	RBProcess* _hostProcess;
	NSString* __overrideExecutablePath;
	NSArray* __additionalMachServices;
	NSDictionary* __additionalEnvironment;
	NSUUID* _requiredCacheUUID;
	NSNumber* _requiredSequenceNumber;

}

@property (nonatomic,retain) RBProcess * hostProcess;                                                            //@synthesize hostProcess=_hostProcess - In the implementation block
@property (assign,nonatomic) unsigned char initialRole;                                                          //@synthesize initialRole=_initialRole - In the implementation block
@property (nonatomic,copy) NSString * homeDirectory;                                                             //@synthesize homeDirectory=_homeDirectory - In the implementation block
@property (nonatomic,copy) NSString * tmpDirectory;                                                              //@synthesize tmpDirectory=_tmpDirectory - In the implementation block
@property (setter=_setOverrideExecutablePath:,nonatomic,copy) NSString * _overrideExecutablePath;                //@synthesize _overrideExecutablePath=__overrideExecutablePath - In the implementation block
@property (setter=_setAdditionalMachServices:,nonatomic,copy) NSArray * _additionalMachServices;                 //@synthesize _additionalMachServices=__additionalMachServices - In the implementation block
@property (setter=_setAdditionalEnvironment:,nonatomic,copy) NSDictionary * _additionalEnvironment;              //@synthesize _additionalEnvironment=__additionalEnvironment - In the implementation block
@property (nonatomic,copy) NSUUID * requiredCacheUUID;                                                           //@synthesize requiredCacheUUID=_requiredCacheUUID - In the implementation block
@property (nonatomic,copy) NSNumber * requiredSequenceNumber;                                                    //@synthesize requiredSequenceNumber=_requiredSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL lsManageRoleOnly;                                                              //@synthesize lsManageRoleOnly=_lsManageRoleOnly - In the implementation block
@property (assign,nonatomic) unsigned long long lsSpawnFlags;                                                    //@synthesize lsSpawnFlags=_lsSpawnFlags - In the implementation block
@property (assign,nonatomic) unsigned short lsUMask;                                                             //@synthesize lsUMask=_lsUMask - In the implementation block
@property (nonatomic,copy) NSArray * lsBinpref;                                                                  //@synthesize lsBinpref=_lsBinpref - In the implementation block
@property (assign,nonatomic) unsigned lsInitialRole; 
@property (assign,nonatomic) unsigned lsPersona;                                                                 //@synthesize lsPersona=_lsPersona - In the implementation block
@property (nonatomic,copy) NSString * beforeTranslocationBundlePath;                                             //@synthesize beforeTranslocationBundlePath=_beforeTranslocationBundlePath - In the implementation block
@property (assign,nonatomic) int hostPid;                                                                        //@synthesize hostPid=_hostPid - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionOverlay;                                                    //@synthesize extensionOverlay=_extensionOverlay - In the implementation block
@property (nonatomic,retain) NSUUID * oneShotUUID;                                                               //@synthesize oneShotUUID=_oneShotUUID - In the implementation block
@property (assign,nonatomic) BOOL forceSubmit;                                                                   //@synthesize forceSubmit=_forceSubmit - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * identity;                                                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                                                  //@synthesize arguments=_arguments - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;                                                //@synthesize executionOptions=_executionOptions - In the implementation block
@property (assign,nonatomic) unsigned char spawnType;                                                            //@synthesize spawnType=_spawnType - In the implementation block
@property (nonatomic,copy) NSString * executablePath; 
@property (nonatomic,copy) NSArray * machServices; 
@property (nonatomic,copy) NSDictionary * environment; 
@property (nonatomic,copy) NSString * standardOutputPath;                                                        //@synthesize standardOutputPath=_standardOutputPath - In the implementation block
@property (nonatomic,copy) NSString * standardErrorPath;                                                         //@synthesize standardErrorPath=_standardErrorPath - In the implementation block
@property (nonatomic,copy) NSString * standardInPath;                                                            //@synthesize standardInPath=_standardInPath - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                                                                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                                               //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                                                            //@synthesize managedPersona=_managedPersona - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)context;
+(id)contextWithIdentity:(id)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setInitialRole:(unsigned char)arg1 ;
-(NSNumber *)requiredSequenceNumber;
-(void)setIdentity:(RBSProcessIdentity *)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(RBProcess *)hostProcess;
-(NSString *)tmpDirectory;
-(NSString *)executablePath;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)setOneShotUUID:(NSUUID *)arg1 ;
-(void)setHomeDirectory:(NSString *)arg1 ;
-(void)setLsSpawnFlags:(unsigned long long)arg1 ;
-(void)setHostProcess:(RBProcess *)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)homeDirectory;
-(void)setExtensionOverlay:(NSDictionary *)arg1 ;
-(NSString *)standardInPath;
-(void)setLsPersona:(unsigned)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(RBSProcessIdentity *)identity;
-(void)_setAdditionalMachServices:(id)arg1 ;
-(void)setLsUMask:(unsigned short)arg1 ;
-(NSArray *)lsBinpref;
-(NSUUID *)requiredCacheUUID;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)executionOptions;
-(BOOL)lsManageRoleOnly;
-(NSString *)standardErrorPath;
-(NSArray *)attributes;
-(NSArray *)arguments;
-(void)_setOverrideExecutablePath:(id)arg1 ;
-(unsigned)lsInitialRole;
-(NSString *)standardOutputPath;
-(NSString *)managedPersona;
-(NSArray *)_additionalMachServices;
-(int)hostPid;
-(void)setLsBinpref:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)lsSpawnFlags;
-(void)setRequiredCacheUUID:(NSUUID *)arg1 ;
-(void)setStandardOutputPath:(NSString *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(unsigned char)spawnType;
-(void)setForceSubmit:(BOOL)arg1 ;
-(void)setHostPid:(int)arg1 ;
-(unsigned)lsPersona;
-(NSString *)_overrideExecutablePath;
-(void)setBeforeTranslocationBundlePath:(NSString *)arg1 ;
-(NSDictionary *)environment;
-(NSDictionary *)_additionalEnvironment;
-(NSString *)explanation;
-(void)setStandardErrorPath:(NSString *)arg1 ;
-(NSUUID *)oneShotUUID;
-(NSString *)beforeTranslocationBundlePath;
-(NSDictionary *)extensionOverlay;
-(void)_setAdditionalEnvironment:(id)arg1 ;
-(unsigned char)initialRole;
-(BOOL)forceSubmit;
-(void)setRequiredSequenceNumber:(NSNumber *)arg1 ;
-(void)setStandardInPath:(NSString *)arg1 ;
-(void)setSpawnType:(unsigned char)arg1 ;
-(void)setTmpDirectory:(NSString *)arg1 ;
-(void)setLsManageRoleOnly:(BOOL)arg1 ;
-(NSArray *)machServices;
-(void)setManagedPersona:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)lsUMask;
-(void)setExecutablePath:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLsInitialRole:(unsigned)arg1 ;
@end

