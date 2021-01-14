/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HDDataAggregator *)aggregator;
-(id)description;
-(HDDataCollectorConfiguration *)configuration;
-(id)initWithAggregator:(id)arg1 identifier:(id)arg2 ;
-(BOOL)hasSetLastSensorDatum;
-(NSString *)identifier;
-(id<HDCollectedSensorDatum>)lastSensorDatum;
-(void)setLastSensorDatum:(id<HDCollectedSensorDatum>)arg1 ;
-(void)setConfiguration:(HDDataCollectorConfiguration *)arg1 ;
@end

