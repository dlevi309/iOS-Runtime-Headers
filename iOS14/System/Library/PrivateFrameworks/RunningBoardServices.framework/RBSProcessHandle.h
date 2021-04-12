/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class RBSMachPortTaskNameRight, RBSProcessMonitor, BSProcessHandle, NSObject, BSAuditToken, NSString, RBSProcessIdentity, RBSProcessBundle, RBSProcessInstance, RBSProcessState, RBSProcessExitContext, RBSProcessLimitations;

@interface RBSProcessHandle : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding> {

	RBSMachPortTaskNameRight* _taskPort;
	RBSProcessMonitor* _monitor;
	BSProcessHandle* _legacyHandle;
	NSObject*<OS_xpc_object> _codedHandle;
	BSAuditToken* _bsAuditToken;
	unsigned long long _data;
	NSString* _cachedName;
	int _pid;
	RBSProcessIdentity* _identity;
	RBSProcessBundle* _bundle;

}

@property (nonatomic,copy,readonly) RBSProcessInstance * instance; 
@property (getter=isReported,nonatomic,readonly) BOOL reported; 
@property (getter=isLifecycleManaged,nonatomic,readonly) BOOL lifecycleManaged; 
@property (nonatomic,copy,readonly) NSString * beforeTranslocationBundlePath; 
@property (nonatomic,readonly) int pid;                                                      //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RB4 auditToken; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                           //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBSProcessBundle * bundle;                                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) int platform; 
@property (nonatomic,readonly) RBSProcessState * currentState; 
@property (nonatomic,readonly) RBSProcessExitContext * lastExitContext; 
@property (nonatomic,readonly) RBSProcessLimitations * activeLimitations; 
@property (nonatomic,readonly) RBSProcessHandle * hostProcess; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(void)clearAllHandles;
+(id)currentProcess;
+(id)handleForPredicate:(id)arg1 error:(out id*)arg2 ;
+(id)handleForLegacyHandle:(id)arg1 error:(out id*)arg2 ;
+(id)handleForIdentifier:(id)arg1 error:(out id*)arg2 ;
+(id)handleForKey:(unsigned long long)arg1 fetchIfNeeded:(BOOL)arg2 ;
+(id)observeForImminentAssertionsExpiration:(/*^block*/id)arg1 ;
-(RBSProcessBundle *)bundle;
-(id)initWithIdentity:(id)arg1 ;
-(RBSProcessExitContext *)lastExitContext;
-(void)monitorForDeath:(/*^block*/id)arg1 ;
-(int)platform;
-(void)intendToExitWith:(id)arg1 ;
-(RBSProcessLimitations *)activeLimitations;
-(BOOL)isLifecycleManaged;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(BOOL)isReported;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessHandle *)hostProcess;
-(int)pid;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(id)processPredicate;
-(RBSProcessState *)currentState;
-(RBSProcessIdentity *)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(RBSProcessInstance *)instance;
-(SCD_Struct_RB4)auditToken;
-(NSString *)name;
-(NSString *)description;
-(BOOL)isValid;
-(id)currentStateMatchingDescriptor:(id)arg1 ;
-(id)initWithInstance:(id)arg1 auditToken:(id)arg2 bundleData:(id)arg3 manageFlags:(unsigned char)arg4 beforeTranslocationBundlePath:(id)arg5 ;
-(unsigned long long)hash;
-(id)legacyHandle;
-(id)initWithCoder:(id)arg1 ;
-(void)plugInHandshakeComplete;
-(double)elapsedCPUTimeForFrontBoard;
-(NSString *)beforeTranslocationBundlePath;
-(id)initWithLaunchContext:(id)arg1 ;
-(void)fullEncode:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

