/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@interface FMDaemon : NSObject
-(void)run;
-(void)initialize;
-(void)startup;
-(void)registerXPCEventHandlers;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2 ;
@end

