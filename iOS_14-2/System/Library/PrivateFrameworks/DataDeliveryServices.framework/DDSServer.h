/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol DDSManaging, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableSet, NSString;

@interface DDSServer : NSObject <NSXPCListenerDelegate> {

	id<DDSManaging> _manager;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _clientConnections;

}

@property (nonatomic,readonly) id<DDSManaging> manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * clientConnections;                //@synthesize clientConnections=_clientConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)initWithManager:(id)arg1 ;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<DDSManaging>)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableSet *)clientConnections;
-(void)handleEndedConnection:(id)arg1 ;
-(void)dealloc;
@end

