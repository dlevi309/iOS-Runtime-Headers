/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeSynchronizing
@required
-(id)deviceUUID;
-(BOOL)synchronizeWithError:(id*)arg1;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)deleteRemoteState:(id*)arg1;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
-(id)sourceDeviceIdentityWithError:(id*)arg1;

@end

