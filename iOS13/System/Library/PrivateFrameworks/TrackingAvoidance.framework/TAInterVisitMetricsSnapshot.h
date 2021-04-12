/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSDate, NSMutableDictionary;

@interface TAInterVisitMetricsSnapshot : NSObject {

	BOOL _isClosed;
	NSDate* _initialTime;
	NSDate* _lastUpdateTime;
	NSMutableDictionary* _accumulatedDeviceMetrics;
	NSMutableDictionary* _firstAssociatedLocationPerDevice;
	NSMutableDictionary* _lastAssociatedLocationPerDevice;
	NSMutableDictionary* _lastAdvPerDevice;

}

@property (nonatomic,readonly) BOOL isClosed;                                                       //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) NSDate * initialTime;                                                //@synthesize initialTime=_initialTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accumulatedDeviceMetrics;                      //@synthesize accumulatedDeviceMetrics=_accumulatedDeviceMetrics - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * firstAssociatedLocationPerDevice;              //@synthesize firstAssociatedLocationPerDevice=_firstAssociatedLocationPerDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastAssociatedLocationPerDevice;               //@synthesize lastAssociatedLocationPerDevice=_lastAssociatedLocationPerDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastAdvPerDevice;                              //@synthesize lastAdvPerDevice=_lastAdvPerDevice - In the implementation block
-(NSDate *)lastUpdateTime;
-(BOOL)isClosed;
-(NSDate *)initialTime;
-(NSMutableDictionary *)accumulatedDeviceMetrics;
-(NSMutableDictionary *)lastAdvPerDevice;
-(NSMutableDictionary *)firstAssociatedLocationPerDevice;
-(NSMutableDictionary *)lastAssociatedLocationPerDevice;
-(id)initWithTime:(id)arg1 ;
-(void)updateInterVisitMetric:(id)arg1 withUpdatedTime:(id)arg2 andCloseSnapshot:(BOOL)arg3 ;
-(void)updateWithInterVisitMetricsSnapshot:(id)arg1 ;
@end

