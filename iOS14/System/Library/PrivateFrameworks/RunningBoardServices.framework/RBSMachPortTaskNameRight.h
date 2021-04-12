/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSAuditToken, NSString;

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCCoding, NSSecureCoding, NSCopying> {

	unsigned _port;
	os_unfair_lock_s _lock;
	int _pid;
	RBSAuditToken* _auditToken;

}

@property (nonatomic,readonly) int pid;                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) RBSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)portForSelf;
+(id)taskNameForPID:(int)arg1 ;
-(unsigned)port;
-(int)pid;
-(id)initWithPID:(int)arg1 ;
-(id)init;
-(BOOL)isUsable;
-(void)encodeWithCoder:(id)arg1 ;
-(RBSAuditToken *)auditToken;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

