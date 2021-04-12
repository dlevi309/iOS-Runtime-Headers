/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSString, NSMutableDictionary, NSObject, NSArray;

@interface FMNanoIDSManager : NSObject <IDSServiceDelegate> {

	unsigned _minVersion;
	IDSService* _service;
	NSString* _serviceId;
	NSMutableDictionary* _outstandingRequests;
	NSMutableDictionary* _registeredRequestHandlers;
	NSObject*<OS_dispatch_queue> _outstandingRequestsModQueue;

}

@property (nonatomic,retain) IDSService * service;                                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * serviceId;                                                  //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) unsigned minVersion;                                                   //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;                             //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredRequestHandlers;                       //@synthesize registeredRequestHandlers=_registeredRequestHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outstandingRequestsModQueue;              //@synthesize outstandingRequestsModQueue=_outstandingRequestsModQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSArray *)devices;
-(NSObject*<OS_dispatch_queue>)outstandingRequestsModQueue;
-(NSString *)serviceId;
-(void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6 requestAcceptedHandler:(/*^block*/id)arg7 responseHandler:(/*^block*/id)arg8 ;
-(BOOL)cancelMessageWithId:(id)arg1 ;
-(void)start;
-(id)_sendProtobuf:(id)arg1 priority:(long long)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6 ;
-(BOOL)_checkMinVersionDeviceID:(id)arg1 ;
-(void)setService:(IDSService *)arg1 ;
-(void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 requestAcceptedHandler:(/*^block*/id)arg6 responseHandler:(/*^block*/id)arg7 ;
-(void)setRegisteredRequestHandlers:(NSMutableDictionary *)arg1 ;
-(id)initWithServiceId:(id)arg1 minimumVersion:(long long)arg2 ;
-(void)setServiceId:(NSString *)arg1 ;
-(unsigned)minVersion;
-(void)setMinVersion:(unsigned)arg1 ;
-(void)handleRequestsOfType:(unsigned short)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6 responseHandler:(/*^block*/id)arg7 ;
-(void)setOutstandingRequestsModQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IDSService *)service;
-(NSMutableDictionary *)registeredRequestHandlers;
-(NSMutableDictionary *)outstandingRequests;
@end

