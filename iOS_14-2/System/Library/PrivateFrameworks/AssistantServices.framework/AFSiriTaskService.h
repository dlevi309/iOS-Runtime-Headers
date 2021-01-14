/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, AFSiriTaskDeliveryHandler, NSString;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	AFSiriTaskDeliveryHandler* _deliveryHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1 ;
+(id)appTaskService;
-(void)setDelegate:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(void)dealloc;
@end

