/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortSendRight.h>

@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {

	BSAuditToken* _critical_auditToken;
	int _pid;

}

@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken; 
+(BOOL)supportsSecureCoding;
+(id)taskNameForPID:(int)arg1 ;
-(int)pid;
-(id)initWithPID:(int)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

