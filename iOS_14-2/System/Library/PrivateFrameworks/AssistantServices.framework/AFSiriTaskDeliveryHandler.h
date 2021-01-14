/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AFSiriTaskServiceDelegate>)delegate;
-(void)setDelegate:(id<AFSiriTaskServiceDelegate>)arg1 ;
-(void)setService:(AFSiriTaskService *)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AFSiriTaskService *)service;
@end

