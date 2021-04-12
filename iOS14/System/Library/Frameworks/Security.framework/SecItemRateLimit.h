/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate;

@interface SecItemRateLimit : NSObject {

	BOOL _forceEnabled;
	NSObject*<OS_dispatch_queue> _dataQueue;
	int _roCapacity;
	int _rwCapacity;
	double _roRate;
	double _rwRate;
	double _limitMultiplier;
	NSDate* _roBucket;
	NSDate* _rwBucket;

}

@property (nonatomic,readonly) int roCapacity;                      //@synthesize roCapacity=_roCapacity - In the implementation block
@property (nonatomic,readonly) double roRate;                       //@synthesize roRate=_roRate - In the implementation block
@property (nonatomic,readonly) int rwCapacity;                      //@synthesize rwCapacity=_rwCapacity - In the implementation block
@property (nonatomic,readonly) double rwRate;                       //@synthesize rwRate=_rwRate - In the implementation block
@property (nonatomic,readonly) double limitMultiplier;              //@synthesize limitMultiplier=_limitMultiplier - In the implementation block
@property (nonatomic,readonly) NSDate * roBucket;                   //@synthesize roBucket=_roBucket - In the implementation block
@property (nonatomic,readonly) NSDate * rwBucket;                   //@synthesize rwBucket=_rwBucket - In the implementation block
+(id)instance;
+(id)getStaticRateLimit;
+(void)resetStaticRateLimit;
-(id)init;
-(double)roRate;
-(double)rwRate;
-(int)roCapacity;
-(int)rwCapacity;
-(void)forceEnabled:(BOOL)arg1 ;
-(BOOL)isReadOnlyAPICallWithinLimits;
-(BOOL)isModifyingAPICallWithinLimits;
-(BOOL)consumeTokenFromBucket:(BOOL)arg1 ;
-(BOOL)shouldCountAPICalls;
-(double)limitMultiplier;
-(NSDate *)roBucket;
-(NSDate *)rwBucket;
-(BOOL)isEnabled;
@end

