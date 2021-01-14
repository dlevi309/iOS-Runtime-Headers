/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSDeviceMessengerClientInterface.h>

@protocol AMSDeviceMessengerServiceInterface, OS_dispatch_queue;
@class AMSDaemonConnection, NSObject, NSMutableArray, NSString;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface> {

	id<AMSDeviceMessengerServiceInterface> _proxyObject;
	AMSDaemonConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _updateHandlers;

}

@property (nonatomic,retain) AMSDaemonConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateHandlers;                 //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AMSDaemonConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(AMSDaemonConnection *)arg1 ;
-(void)deviceMessengerDidReceiveMessage:(id)arg1 ;
-(void)deviceMessengerDidReceiveReply:(id)arg1 ;
-(void)deviceMessengerDidClearMessage:(id)arg1 ;
-(void)deviceMessengerDidUpdateDevices;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)clearDialog:(id)arg1 ;
-(NSMutableArray *)updateHandlers;
-(id)_getProxyObject;
-(id)_identifierFromDialogRequest:(id)arg1 ;
-(void)_sendDelegateUpdateForMessage:(id)arg1 ;
-(void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)dialogsWithFilter:(id)arg1 ;
-(id)sendDialog:(id)arg1 account:(id)arg2 ;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
@end

