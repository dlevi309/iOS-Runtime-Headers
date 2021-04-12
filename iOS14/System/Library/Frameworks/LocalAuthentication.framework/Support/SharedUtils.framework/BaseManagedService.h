/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <libobjc.A.dylib/Service.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol ServiceManager, OS_dispatch_queue;
@class NSMutableDictionary, NSXPCListener, NSString, NSXPCListenerEndpoint, NSObject;

@interface BaseManagedService : NSObject <Service, NSXPCListenerDelegate> {

	NSMutableDictionary* _clients;
	BOOL _terminating;
	NSXPCListener* _listener;
	id<ServiceManager> manager;
	NSString* _serviceID;
	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<ServiceManager> manager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                            //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id)init;
-(void)setManager:(id<ServiceManager>)arg1 ;
-(NSString *)serviceID;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<ServiceManager>)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)_disconnectClient:(id)arg1 ;
@end

