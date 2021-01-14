/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncRemoteStorage
@required
-(void)cancelOutstandingOperations;
-(BOOL)isAvailable;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(long long)transportType;
-(id)name;

@end

