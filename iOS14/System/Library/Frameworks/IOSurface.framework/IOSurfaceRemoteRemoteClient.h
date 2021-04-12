/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IOSurface/IOSurface-Structs.h>
@class NSMutableDictionary, NSObject;

@interface IOSurfaceRemoteRemoteClient : NSObject {

	int _pid;
	NSMutableDictionary* _surfaceStates;
	NSObject*<OS_xpc_object> _remoteConnection;
	NSObject*<OS_dispatch_queue> _disconnectedQueue;
	/*^block*/id _disconnectedHandler;

}

@property (assign,nonatomic) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * surfaceStates;                         //@synthesize surfaceStates=_surfaceStates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> remoteConnection;                   //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> disconnectedQueue;              //@synthesize disconnectedQueue=_disconnectedQueue - In the implementation block
@property (nonatomic,copy) id disconnectedHandler;                                        //@synthesize disconnectedHandler=_disconnectedHandler - In the implementation block
-(int)pid;
-(void)_handleError:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(id)description;
-(void)setPid:(int)arg1 ;
-(void)dealloc;
-(id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(/*^block*/id)arg3 ;
-(void)setSurfaceStates:(NSMutableDictionary *)arg1 ;
-(void)setDisconnectedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisconnectedHandler:(id)arg1 ;
-(void)setRemoteConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)remoteConnection;
-(NSObject*<OS_dispatch_queue>)disconnectedQueue;
-(id)disconnectedHandler;
-(NSMutableDictionary *)surfaceStates;
-(BOOL)_removeSurface:(unsigned)arg1 ;
-(IOSurfaceClientRef)_getClient:(unsigned)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id*)arg3 ;
-(void)_addSurface:(IOSurfaceClientRef)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
@end

