/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
+(id)sharedInstance;
+(void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2 ;
+(void)unregisterTaskDelegate:(id)arg1 ;
-(id)init;
-(void)cancelBackgroundTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 ;
-(void)addBackgroundTask:(id)arg1 ;
-(void)handleXPCActivity:(id)arg1 withID:(id)arg2 ;
@end

