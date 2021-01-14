/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@interface DRSClientConnectionState : NSObject {

	BOOL _hasAdminEntitlement;
	int _pid;

}

@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BOOL hasAdminEntitlement;              //@synthesize hasAdminEntitlement=_hasAdminEntitlement - In the implementation block
-(int)pid;
-(void)dealloc;
-(BOOL)hasAdminEntitlement;
-(id)initWithConnection:(id)arg1 service:(id)arg2 ;
@end

