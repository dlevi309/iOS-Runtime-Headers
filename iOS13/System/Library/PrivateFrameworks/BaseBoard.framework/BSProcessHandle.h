/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BSMachPortTaskNameRight, BSAuditToken;

@interface BSProcessHandle : NSObject <RBSProcessIdentifier, BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	int _pid;
	NSString* _name;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _bundlePath;
	BSMachPortTaskNameRight* _taskNameRight;
	BSAuditToken* _auditToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                    //@synthesize bundlePath=_bundlePath - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(id)processHandle;
+(id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2 ;
+(id)processHandleForPID:(int)arg1 ;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(id)processPredicate;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)jobLabel;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(id)initWithTaskNameRight:(id)arg1 ;
-(id)initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithTaskNameRight:(id)arg1 bundleID:(id)arg2 ;
-(id)initWithCurrentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(BOOL)_isRunningWithCertainty:(out BOOL*)arg1 ;
-(void)setJobLabel:(NSString *)arg1 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)setBundlePath:(NSString *)arg1 ;
@end

