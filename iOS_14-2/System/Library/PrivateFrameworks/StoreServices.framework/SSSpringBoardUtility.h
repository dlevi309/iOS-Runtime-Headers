/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSSpringBoardUtility : NSObject
+(id)_dispatchQueue;
+(void)wakeAppUsingRequest:(id)arg1 ;
+(id)_applicationStateMonitor;
+(id)_dispatchQueueSpringBoard;
+(BOOL)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)_getProcessID:(int*)arg1 forApplicationIdentifier:(id)arg2 ;
+(void)_setApplicationState:(unsigned)arg1 forClientID:(id)arg2 ;
+(id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2 ;
+(id)_stateCache;
+(id)_dispatchQueueNotifications;
@end

