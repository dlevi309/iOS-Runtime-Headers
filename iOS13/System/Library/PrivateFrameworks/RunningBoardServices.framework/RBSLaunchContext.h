/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentity, NSArray, NSString, NSDictionary, NSUUID, NSNumber;

@interface RBSLaunchContext : NSObject <BSXPCSecureCoding, NSCopying> {

	unsigned char _spawnType;
	RBSProcessIdentity* _identity;
	NSArray* _arguments;
	unsigned long long _executionOptions;
	NSString* _standardOutputPath;
	NSString* _standardErrorPath;
	NSArray* _attributes;
	NSString* _explanation;
	NSString* _managedPersona;
	NSString* __overrideExecutablePath;
	NSArray* __additionalMachServices;
	NSDictionary* __additionalEnvironment;
	NSUUID* _requiredCacheUUID;
	NSNumber* _requiredSequenceNumber;

}

@property (setter=_setOverrideExecutablePath:,nonatomic,copy) NSString * _overrideExecutablePath;                //@synthesize _overrideExecutablePath=__overrideExecutablePath - In the implementation block
@property (setter=_setAdditionalMachServices:,nonatomic,copy) NSArray * _additionalMachServices;                 //@synthesize _additionalMachServices=__additionalMachServices - In the implementation block
@property (setter=_setAdditionalEnvironment:,nonatomic,copy) NSDictionary * _additionalEnvironment;              //@synthesize _additionalEnvironment=__additionalEnvironment - In the implementation block
@property (nonatomic,copy) NSUUID * requiredCacheUUID;                                                           //@synthesize requiredCacheUUID=_requiredCacheUUID - In the implementation block
@property (nonatomic,copy) NSNumber * requiredSequenceNumber;                                                    //@synthesize requiredSequenceNumber=_requiredSequenceNumber - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * identity;                                                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                                                  //@synthesize arguments=_arguments - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;                                                //@synthesize executionOptions=_executionOptions - In the implementation block
@property (assign,nonatomic) unsigned char spawnType;                                                            //@synthesize spawnType=_spawnType - In the implementation block
@property (nonatomic,copy) NSString * executablePath; 
@property (nonatomic,copy) NSArray * machServices; 
@property (nonatomic,copy) NSDictionary * environment; 
@property (nonatomic,copy) NSString * standardOutputPath;                                                        //@synthesize standardOutputPath=_standardOutputPath - In the implementation block
@property (nonatomic,copy) NSString * standardErrorPath;                                                         //@synthesize standardErrorPath=_standardErrorPath - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                                                                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                                               //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                                                            //@synthesize managedPersona=_managedPersona - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
+(BOOL)supportsBSXPCSecureCoding;
+(id)contextWithIdentity:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(NSString *)executablePath;
-(NSArray *)arguments;
-(NSDictionary *)environment;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(RBSProcessIdentity *)identity;
-(void)setIdentity:(RBSProcessIdentity *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(unsigned long long)executionOptions;
-(NSString *)_overrideExecutablePath;
-(NSArray *)_additionalMachServices;
-(NSDictionary *)_additionalEnvironment;
-(NSString *)standardOutputPath;
-(NSString *)standardErrorPath;
-(NSString *)managedPersona;
-(unsigned char)spawnType;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(void)_setOverrideExecutablePath:(id)arg1 ;
-(void)_setAdditionalMachServices:(id)arg1 ;
-(void)_setAdditionalEnvironment:(id)arg1 ;
-(void)setStandardOutputPath:(NSString *)arg1 ;
-(void)setStandardErrorPath:(NSString *)arg1 ;
-(void)setManagedPersona:(NSString *)arg1 ;
-(void)setSpawnType:(unsigned char)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(NSArray *)machServices;
-(NSUUID *)requiredCacheUUID;
-(void)setRequiredCacheUUID:(NSUUID *)arg1 ;
-(NSNumber *)requiredSequenceNumber;
-(void)setRequiredSequenceNumber:(NSNumber *)arg1 ;
@end

