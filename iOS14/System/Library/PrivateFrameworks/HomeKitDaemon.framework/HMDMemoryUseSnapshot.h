/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSDate, NSString, NSNumber;

@interface HMDMemoryUseSnapshot : NSObject {

	NSDate* _date;
	NSString* _reason;
	NSNumber* _memoryUsage;
	NSNumber* _maxMemoryUsage;

}

@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSNumber * memoryUsage;                 //@synthesize memoryUsage=_memoryUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * maxMemoryUsage;              //@synthesize maxMemoryUsage=_maxMemoryUsage - In the implementation block
+(id)memoryUseSnapshotWithReason:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)reason;
-(NSDate *)date;
-(NSNumber *)memoryUsage;
-(NSNumber *)maxMemoryUsage;
-(id)__initWithReason:(id)arg1 memoryUsage:(id)arg2 maxMemoryUsage:(id)arg3 ;
@end

