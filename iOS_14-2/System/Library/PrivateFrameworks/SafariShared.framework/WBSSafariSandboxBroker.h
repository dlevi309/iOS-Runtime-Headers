/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSSafariSandboxBrokerProtocol.h>

@protocol OS_os_log;
@class NSObject;

@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol> {

	int _pid;
	NSObject*<OS_os_log> _log;
	SCD_Struct_WB32 _auditToken;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;                //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) int pid;                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB32 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
-(int)pid;
-(NSObject*<OS_os_log>)log;
-(SCD_Struct_WB32)auditToken;
-(id)initWithPID:(int)arg1 auditToken:(SCD_Struct_WB32)arg2 ;
@end

