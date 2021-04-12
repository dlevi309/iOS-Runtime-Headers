/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSSafariSandboxBrokerProtocol.h>

@protocol OS_os_log;
@class NSObject;

@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol> {

	int _pid;
	NSObject*<OS_os_log> _log;
	SCD_Struct_WB12 _auditToken;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;                //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) int pid;                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB12 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
-(SCD_Struct_WB12)auditToken;
-(NSObject*<OS_os_log>)log;
-(int)pid;
-(id)initWithPID:(int)arg1 auditToken:(SCD_Struct_WB12)arg2 ;
@end

