/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortSendRight.h>

@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {

	int _pid;
	BSAuditToken* _critical_auditToken;

}

@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken; 
+(BOOL)supportsSecureCoding;
+(id)taskNameForPID:(int)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(int)pid;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithPID:(int)arg1 ;
@end

