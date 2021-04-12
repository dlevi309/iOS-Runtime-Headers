/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HMFUnfairLock, NSObject;

@interface HMFMemoryMonitor : HMFObject {

	HMFUnfairLock* _lock;
	BOOL _monitoring;
	long long _memoryState;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_source> _memoryPressure;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> memoryPressure;              //@synthesize memoryPressure=_memoryPressure - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                         //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,readonly) long long memoryState;                                     //@synthesize memoryState=_memoryState - In the implementation block
+(id)memoryMonitor;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isMonitoring;
-(NSObject*<OS_dispatch_source>)memoryPressure;
-(void)setMonitoring:(BOOL)arg1 ;
-(long long)memoryState;
@end

