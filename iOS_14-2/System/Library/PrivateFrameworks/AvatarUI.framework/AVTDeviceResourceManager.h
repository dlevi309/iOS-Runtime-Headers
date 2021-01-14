/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTDeviceResourceConsumerDelegate.h>

@protocol AVTUILogger, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate> {

	NSMutableArray* _consumers;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _stateLock;

}

@property (nonatomic,readonly) NSMutableArray * consumers;                          //@synthesize consumers=_consumers - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)consumers;
-(void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2 ;
-(id<AVTUILogger>)logger;
-(void)registerConsumer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(id)initWithLogger:(id)arg1 lockProvider:(/*^block*/id)arg2 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)performWorkWithConsumers:(/*^block*/id)arg1 ;
@end

