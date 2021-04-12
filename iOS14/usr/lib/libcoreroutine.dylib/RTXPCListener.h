/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface RTXPCListener : NSXPCListener <NSXPCListenerDelegate> {

	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connectedClients;
	NSMutableArray* _disconnectedClients;

}

@property (nonatomic,readonly) NSString * machServiceName;                        //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connectedClients;                 //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,readonly) NSMutableArray * disconnectedClients;              //@synthesize disconnectedClients=_disconnectedClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setup;
-(void)_shutdown;
-(void)_setup;
-(void)shutdown;
-(NSString *)machServiceName;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)connectedClients;
-(void)logClients;
-(NSMutableArray *)disconnectedClients;
@end

