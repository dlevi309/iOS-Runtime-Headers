/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASXPCServerHelper : NSObject
+(BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(/*^block*/id)arg6 setupClientProxy:(/*^block*/id)arg7 interruptionHandler:(/*^block*/id)arg8 invalidationHandler:(/*^block*/id)arg9 logHandle:(id)arg10 ;
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(BOOL)arg5 ;
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3 ;
@end

