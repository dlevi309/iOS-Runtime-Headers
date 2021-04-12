/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class BSMachPortTaskNameRight, RBSProcessIdentity, RBSProcessMonitor, BSProcessHandle, NSObject, RBSProcessBundle, RBSProcessInstance, BSAuditToken, NSString, RBSProcessState, RBSProcessExitContext, RBSProcessLimitations;

@interface RBSProcessHandle : NSObject <BSDescriptionProviding, BSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding> {

	unsigned long long _ipcID;
	BSMachPortTaskNameRight* _lifePort;
	RBSProcessIdentity* _identity;
	RBSProcessMonitor* _monitor;
	BSProcessHandle* _legacyHandle;
	NSObject*<OS_xpc_object> _codedHandle;
	BOOL _reported;
	RBSProcessBundle* _bundle;
	RBSProcessInstance* _instance;

}

@property (nonatomic,readonly) BSMachPortTaskNameRight * lifePort;                     //@synthesize lifePort=_lifePort - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessInstance * instance;                     //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) BSAuditToken * auditToken; 
@property (getter=isReported,nonatomic,readonly) BOOL reported;                        //@synthesize reported=_reported - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,readonly) RBSProcessBundle * bundle;                              //@synthesize bundle=_bundle - In the implementation block
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
+(BOOL)supportsBSXPCSecureCoding;
+(id)currentProcess;
+(void)clearAllHandles;
+(id)handleForPredicate:(id)arg1 error:(out id*)arg2 ;
+(id)_cachedHandleForKey:(id)arg1 ;
+(id)_cacheHandle:(id)arg1 ;
+(id)handleForIdentifier:(id)arg1 error:(out id*)arg2 ;
+(id)handleForKey:(unsigned long long)arg1 fetchIfNeeded:(BOOL)arg2 ;
+(id)handleForLegacyHandle:(id)arg1 error:(out id*)arg2 ;
+(id)observeForImminentAssertionsExpiration:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(RBSProcessBundle *)bundle;
-(RBSProcessIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(RBSProcessState *)currentState;
-(RBSProcessInstance *)instance;
-(int)pid;
-(id)succinctDescription;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)isReported;
-(int)rbs_pid;
-(id)processPredicate;
-(void)plugInHandshakeComplete;
-(void)fullEncode:(id)arg1 forKey:(id)arg2 ;
-(id)currentStateMatchingDescriptor:(id)arg1 ;
-(void)_fullEncode:(id)arg1 ;
-(void)_keepAlive;
-(RBSProcessExitContext *)lastExitContext;
-(RBSProcessLimitations *)activeLimitations;
-(RBSProcessHandle *)hostProcess;
-(void)monitorForDeath:(/*^block*/id)arg1 ;
-(void)intendToExitWith:(id)arg1 ;
-(id)initWithInstance:(id)arg1 lifePort:(id)arg2 bundleData:(id)arg3 reported:(BOOL)arg4 ;
-(id)legacyHandle;
-(BSMachPortTaskNameRight *)lifePort;
@end

