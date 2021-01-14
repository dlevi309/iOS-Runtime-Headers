/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriUsageResultHandling.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFSiriRequestHandling.h>
#import <libobjc.A.dylib/AFSiriRequestFailureHandling.h>

@protocol OS_dispatch_queue, AFSiriTaskDelivering, AFSiriTaskmasterDelegate;
@class NSObject, NSXPCListener, NSMapTable, NSString;

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskDelivering> _taskDeliverer;
	NSXPCListener* _usageResultListener;
	NSMapTable* _executorForRequest;
	id<AFSiriTaskmasterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFSiriTaskmasterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskmasterForMachServiceWithName:(id)arg1 ;
+(id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1 ;
+(id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1 ;
-(id<AFSiriTaskmasterDelegate>)delegate;
-(void)setDelegate:(id<AFSiriTaskmasterDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3 ;
-(id)initWithTaskDeliverer:(id)arg1 ;
-(void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)dealloc;
-(void)handleSiriRequest:(id)arg1 deliveryHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

