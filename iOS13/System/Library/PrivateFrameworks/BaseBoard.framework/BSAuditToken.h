/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _bundleID;
	SCD_Struct_BS18 _auditToken;
	os_unfair_lock_s _secTaskLock;
	SecTaskRef _lazy_secTaskLock_secTask;

}

@property (nonatomic,copy) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) SCD_Struct_BS18 realToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenFromAuditToken:(SCD_Struct_BS18)arg1 ;
+(id)tokenFromXPCConnection:(id)arg1 ;
+(id)tokenForCurrentProcess;
+(id)tokenFromAuditTokenRef:(SCD_Struct_BS18*)arg1 ;
+(id)tokenFromXPCMessage:(id)arg1 ;
+(id)tokenFromMachMessage:(SCD_Struct_BS20*)arg1 ;
+(id)tokenFromNSXPCConnection:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_BS18)arg1 ;
-(id)initWithXPCMessage:(id)arg1 ;
-(id)_bundleIDGeneratingIfNeeded:(BOOL)arg1 ;
-(void)_accessSecTask:(/*^block*/id)arg1 ;
-(id)_valueFromData:(id)arg1 ofType:(const char*)arg2 ;
-(id)_dataWithValue:(id)arg1 ;
-(SCD_Struct_BS18)realToken;
@end

