/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/


@protocol CacheDeleteServiceProtocol
@required
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)serviceCancelPurge:(/*^block*/id)arg1;
-(void)servicePing:(/*^block*/id)arg1;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end

