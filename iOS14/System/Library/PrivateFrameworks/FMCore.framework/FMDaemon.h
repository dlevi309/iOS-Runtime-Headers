/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@interface FMDaemon : NSObject
-(void)initialize;
-(void)run;
-(void)startup;
-(void)registerXPCEventHandlers;
-(id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2 ;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
@end

