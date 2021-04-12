/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_queue, AFSiriTaskServiceDelegate;
@class AFSiriTaskService, NSObject, NSString;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering> {

	AFSiriTaskService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) AFSiriTaskService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AFSiriTaskServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<AFSiriTaskServiceDelegate>)delegate;
-(void)setDelegate:(id<AFSiriTaskServiceDelegate>)arg1 ;
-(AFSiriTaskService *)service;
-(void)setService:(AFSiriTaskService *)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

