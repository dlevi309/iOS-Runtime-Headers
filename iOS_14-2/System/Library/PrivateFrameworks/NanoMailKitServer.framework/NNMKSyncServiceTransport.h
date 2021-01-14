/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKSyncServiceTransport <NSObject>
@property (nonatomic,readonly) unsigned long long connectivityState; 
@property (assign,nonatomic) BOOL forceFailureForAllRequests; 
@property (assign,nonatomic) BOOL simulateCloudConnectedOnly; 
@optional
-(void)forceFailureForNextRequest;
-(BOOL)forceFailureForAllRequests;
-(void)setForceFailureForAllRequests:(BOOL)arg1;
-(BOOL)simulateCloudConnectedOnly;
-(void)setSimulateCloudConnectedOnly:(BOOL)arg1;

@required
-(unsigned long long)connectivityState;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(BOOL)arg5;

@end

