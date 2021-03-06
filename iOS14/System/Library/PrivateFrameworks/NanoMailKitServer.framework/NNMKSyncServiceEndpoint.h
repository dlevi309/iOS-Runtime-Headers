/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKSyncServiceTransport, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSMutableDictionary;

@interface NNMKSyncServiceEndpoint : NSObject {

	id<NNMKSyncServiceTransport> _serviceTransport;
	NSString* _idsServiceName;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	NSMutableDictionary* _repeatPreventionRecords;
	NSObject*<OS_dispatch_source> _repeatPreventionCleanupTimer;

}

@property (nonatomic,retain) NSString * idsServiceName;                                               //@synthesize idsServiceName=_idsServiceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceQueue;                               //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) id<NNMKSyncServiceTransport> serviceTransport;                           //@synthesize serviceTransport=_serviceTransport - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * repeatPreventionRecords;                           //@synthesize repeatPreventionRecords=_repeatPreventionRecords - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> repeatPreventionCleanupTimer;              //@synthesize repeatPreventionCleanupTimer=_repeatPreventionCleanupTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long connectivityState; 
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(unsigned long long)connectivityState;
-(void)connectivityChanged;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(BOOL)arg5 ;
-(NSString *)idsServiceName;
-(void)setIdsServiceName:(NSString *)arg1 ;
-(void)spaceBecameAvailable;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)dealloc;
-(void)setServiceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIDSServiceName:(id)arg1 queue:(id)arg2 ;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 timeoutCategory:(unsigned long long)arg5 allowCloudDelivery:(BOOL)arg6 ;
-(void)_initializeServiceTransport;
-(void)_removeExpiredRepeatPreventionRecords;
-(BOOL)_willIdRepeat:(id)arg1 ;
-(void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)resetRepeatPreventionHistory;
-(void)syncServiceTransport:(id)arg1 didReadProtobufData:(id)arg2 type:(unsigned long long)arg3 ;
-(void)syncServiceTransport:(id)arg1 didSendProtobufSuccessfullyWithIdentifier:(id)arg2 ;
-(void)syncServiceTransport:(id)arg1 didFailSendingProtobufWithIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)syncServiceTransportDidReportSpaceBecameAvailable:(id)arg1 ;
-(void)syncServiceTransportDidChangeConnectivity:(id)arg1 ;
-(id<NNMKSyncServiceTransport>)serviceTransport;
-(void)setServiceTransport:(id<NNMKSyncServiceTransport>)arg1 ;
-(NSMutableDictionary *)repeatPreventionRecords;
-(void)setRepeatPreventionRecords:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)repeatPreventionCleanupTimer;
-(void)setRepeatPreventionCleanupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

