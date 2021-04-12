/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
+(id)sharedInstance;
+(void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2 ;
+(void)unregisterTaskDelegate:(id)arg1 ;
-(id)init;
-(void)checkOnTask:(id)arg1 ;
-(void)cancelBackgroundTask:(id)arg1 ;
-(void)addBackgroundTask:(id)arg1 ;
-(void)handleXPCActivity:(id)arg1 withID:(id)arg2 ;
@end

