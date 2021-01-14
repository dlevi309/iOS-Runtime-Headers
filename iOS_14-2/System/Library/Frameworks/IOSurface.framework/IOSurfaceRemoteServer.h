/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface IOSurfaceRemoteServer : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> listener;               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                        //@synthesize clients=_clients - In the implementation block
-(NSMutableArray *)clients;
-(void)shutdown;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)_handleClientConnection:(id)arg1 ;
-(void)_handleClientDisconnected:(id)arg1 ;
-(id)initWithListener:(id)arg1 options:(id)arg2 ;
@end

