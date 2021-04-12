/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AVTUILogger>)logger;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(NSMutableArray *)consumers;
-(void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2 ;
-(id)initWithLogger:(id)arg1 lockProvider:(/*^block*/id)arg2 ;
-(void)performWorkWithConsumers:(/*^block*/id)arg1 ;
@end

