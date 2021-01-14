/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCAccessChecker : NSObject
-(id)init;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
@end

