/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass> {

	_DKSyncRapportCommonStorage* _commonStorage;

}
-(void)setDeviceID:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(BOOL)isAvailable;
-(id)client;
-(id)init;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(long long)transportType;
-(id)name;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(id)myDeviceID;
@end

