/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NNMKSyncServiceTransport.h>

@protocol NNMKSyncServiceTransportDelegate;
@class IDSService, NSString;

@interface NNMKSyncServiceIDSTransport : NSObject <IDSServiceDelegate, NNMKSyncServiceTransport> {

	IDSService* _idsService;
	unsigned long long _connectivityState;
	id<NNMKSyncServiceTransportDelegate> _delegate;
	NSString* _serviceName;

}

@property (nonatomic,retain) IDSService * idsService;                                           //@synthesize idsService=_idsService - In the implementation block
@property (assign,nonatomic) unsigned long long connectivityState;                              //@synthesize connectivityState=_connectivityState - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKSyncServiceTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                            //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL forceFailureForAllRequests; 
@property (assign,nonatomic) BOOL simulateCloudConnectedOnly; 
-(void)dealloc;
-(id<NNMKSyncServiceTransportDelegate>)delegate;
-(void)setDelegate:(id<NNMKSyncServiceTransportDelegate>)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(unsigned long long)connectivityState;
-(unsigned long long)_connectivityState;
-(double)_timeIntervalFromTimeoutCategory:(unsigned long long)arg1 ;
-(void)_handleConnectivityChange;
-(void)setConnectivityState:(unsigned long long)arg1 ;
@end

