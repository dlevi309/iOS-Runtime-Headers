/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
*/


@interface PREXPCServerHelper : NSObject
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 ;
+(BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(/*^block*/id)arg5 setupClientProxy:(/*^block*/id)arg6 interruptionHandler:(/*^block*/id)arg7 invalidationHandler:(/*^block*/id)arg8 ;
@end

