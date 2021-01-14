/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _bundleID;
	BOOL _resolvedBundleID;
	os_unfair_lock_s _secTaskLock;
	SecTaskRef _lazy_secTaskLock_secTask;
	SCD_Struct_BS15 _auditToken;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) long long versionedPID; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) SCD_Struct_BS15 realToken;                  //@synthesize auditToken=_auditToken - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenFromMachMessage:(SCD_Struct_BS16*)arg1 ;
+(id)tokenFromNSXPCConnection:(id)arg1 ;
+(id)tokenFromXPCConnection:(id)arg1 ;
+(id)tokenFromXPCMessage:(id)arg1 ;
+(id)tokenFromAuditToken:(SCD_Struct_BS15)arg1 ;
+(id)tokenFromAuditTokenRef:(SCD_Struct_BS15*)arg1 ;
+(id)tokenForCurrentProcess;
-(BOOL)isInvalid;
-(int)pid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_BS15)arg1 ;
-(unsigned)euid;
-(BOOL)hasSameProcessAsAuditToken:(id)arg1 ;
-(long long)versionedPID;
-(NSString *)description;
-(SCD_Struct_BS15)realToken;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

