/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HIDVirtualEventServiceDelegate>)delegate;
-(void)setDelegate:(id<HIDVirtualEventServiceDelegate>)arg1 ;
-(void)cancel;
-(HIDEventSystemClient *)client;
-(void)setClient:(HIDEventSystemClient *)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(BOOL)dispatchEvent:(id)arg1 ;
-(unsigned long long)serviceID;
-(void)setServiceClient:(HIDServiceClient *)arg1 ;
-(HIDServiceClient *)serviceClient;
@end

