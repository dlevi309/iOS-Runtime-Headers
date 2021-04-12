/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


@protocol HIDVirtualEventServiceDelegate, OS_dispatch_queue;
@class HIDEventSystemClient, HIDServiceClient, NSObject;

@interface HIDVirtualEventService : NSObject {

	id<HIDVirtualEventServiceDelegate> _delegate;
	HIDEventSystemClient* _client;
	HIDServiceClient* _serviceClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) HIDEventSystemClient * client;                            //@synthesize client=_client - In the implementation block
@property (retain) HIDServiceClient * serviceClient;                         //@synthesize serviceClient=_serviceClient - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long serviceID; 
@property (__weak) id<HIDVirtualEventServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(HIDEventSystemClient *)client;
-(void)setClient:(HIDEventSystemClient *)arg1 ;
-(id)init;
-(id<HIDVirtualEventServiceDelegate>)delegate;
-(void)setDispatchQueue:(id)arg1 ;
-(unsigned long long)serviceID;
-(HIDServiceClient *)serviceClient;
-(void)setServiceClient:(HIDServiceClient *)arg1 ;
-(void)activate;
-(void)setDelegate:(id<HIDVirtualEventServiceDelegate>)arg1 ;
-(id)description;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(BOOL)dispatchEvent:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

