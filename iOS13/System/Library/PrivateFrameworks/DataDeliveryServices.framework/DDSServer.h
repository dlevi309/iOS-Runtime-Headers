/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/DDSManagingDelegate.h>

@protocol DDSManaging, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableSet, NSString;

@interface DDSServer : NSObject <NSXPCListenerDelegate, DDSManagingDelegate> {

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
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithManager:(id)arg1 ;
-(id<DDSManaging>)manager;
-(NSMutableSet *)clientConnections;
-(void)didUpdateAssetsWithType:(id)arg1 ;
-(void)handleEndedConnection:(id)arg1 ;
@end

