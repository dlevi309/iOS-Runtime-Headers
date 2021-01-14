/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSMutableDictionary;

@interface TAInterVisitMetricsSnapshot : NSObject <NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
-(BOOL)isClosed;
-(NSDate *)lastUpdateTime;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)initialTime;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTime:(id)arg1 ;
-(NSMutableDictionary *)accumulatedDeviceMetrics;
-(void)updateInterVisitMetric:(id)arg1 withUpdatedTime:(id)arg2 andCloseSnapshot:(BOOL)arg3 ;
-(void)updateWithInterVisitMetricsSnapshot:(id)arg1 ;
-(NSMutableDictionary *)lastAdvPerDevice;
-(NSMutableDictionary *)firstAssociatedLocationPerDevice;
-(NSMutableDictionary *)lastAssociatedLocationPerDevice;
@end

