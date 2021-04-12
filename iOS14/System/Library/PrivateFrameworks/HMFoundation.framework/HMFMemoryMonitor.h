/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HMFUnfairLock, NSObject;

@interface HMFMemoryMonitor : HMFObject {

	BOOL _monitoring;
	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _systemMemoryState;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> memoryPressureSource;              //@synthesize memoryPressureSource=_memoryPressureSource - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                               //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) long long systemMemoryState;                                       //@synthesize systemMemoryState=_systemMemoryState - In the implementation block
+(id)memoryMonitor;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)start;
-(BOOL)isMonitoring;
-(long long)systemMemoryState;
-(HMFUnfairLock *)lock;
-(void)stop;
-(void)setSystemMemoryState:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryPressureSource;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dealloc;
@end

