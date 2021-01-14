/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeSynchronizing
@required
-(BOOL)deleteRemoteState:(id*)arg1;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
-(BOOL)synchronizeWithError:(id*)arg1;
-(id)sourceDeviceIdentityWithError:(id*)arg1;
-(id)deviceUUID;

@end

