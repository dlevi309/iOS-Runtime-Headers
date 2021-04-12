/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCollectedSensorDatum;
@class HDDataAggregator, NSString, HDDataCollectorConfiguration;

@interface HDDataCollectorAggregatorRecord : NSObject {

	BOOL _hasSetLastSensorDatum;
	HDDataAggregator* _aggregator;
	NSString* _identifier;
	HDDataCollectorConfiguration* _configuration;
	id<HDCollectedSensorDatum> _lastSensorDatum;

}

@property (nonatomic,readonly) HDDataAggregator * aggregator;                           //@synthesize aggregator=_aggregator - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HDDataCollectorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id<HDCollectedSensorDatum> lastSensorDatum;                  //@synthesize lastSensorDatum=_lastSensorDatum - In the implementation block
@property (nonatomic,readonly) BOOL hasSetLastSensorDatum;                              //@synthesize hasSetLastSensorDatum=_hasSetLastSensorDatum - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setConfiguration:(HDDataCollectorConfiguration *)arg1 ;
-(HDDataCollectorConfiguration *)configuration;
-(HDDataAggregator *)aggregator;
-(id)initWithAggregator:(id)arg1 identifier:(id)arg2 ;
-(void)setLastSensorDatum:(id<HDCollectedSensorDatum>)arg1 ;
-(id<HDCollectedSensorDatum>)lastSensorDatum;
-(BOOL)hasSetLastSensorDatum;
@end

