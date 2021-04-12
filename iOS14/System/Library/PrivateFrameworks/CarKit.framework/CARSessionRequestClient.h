/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)startSessionWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRequests;
-(void)prepareForRemovingWiFiUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(NSXPCConnection *)serviceConnection;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

