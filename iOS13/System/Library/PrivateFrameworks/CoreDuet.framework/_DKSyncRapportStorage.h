/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {

	_DKSyncRapportCommonStorage* _commonStorage;

}
-(id)init;
-(id)name;
-(void)start;
-(id)client;
-(BOOL)isAvailable;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDeviceID:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(id)myDeviceID;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
@end

