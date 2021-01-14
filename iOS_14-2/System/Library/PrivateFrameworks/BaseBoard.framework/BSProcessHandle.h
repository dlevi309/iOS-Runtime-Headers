/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BSAuditToken, BSMachPortTaskNameRight;

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	BOOL _resolvedBundleID;
	int _pid;
	NSString* _bundleID;
	BSAuditToken* _auditToken;
	NSString* _name;
	BSMachPortTaskNameRight* _taskNameRight;

}

@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
+(id)processHandle;
+(id)processHandleForAuditToken:(id)arg1 bundleID:(id)arg2 ;
+(id)processHandleForPID:(int)arg1 ;
-(id)succinctDescription;
-(int)pid;
-(NSString *)jobLabel;
-(id)init;
-(NSString *)bundlePath;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BSAuditToken *)auditToken;
-(NSString *)name;
-(NSString *)description;
-(BOOL)isValid;
-(BSMachPortTaskNameRight *)taskNameRight;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)dealloc;
@end

