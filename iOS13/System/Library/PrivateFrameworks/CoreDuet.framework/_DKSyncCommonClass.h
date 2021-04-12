/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>
@required
-(id)client;
-(void)setDeviceID:(id)arg1;
-(id)myDeviceID;
-(BOOL)isTransportActiveForPeer:(id)arg1;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2;
-(id)transformResponseError:(id)arg1;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6;

@end

