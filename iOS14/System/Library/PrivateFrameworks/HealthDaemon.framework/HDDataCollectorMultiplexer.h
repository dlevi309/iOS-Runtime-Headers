/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDataCollector;
@class HDProfile, NSDictionary, NSMapTable;

@interface HDDataCollectorMultiplexer : NSObject {

	HDProfile* _profile;
	id<HDDataCollector> _collector;
	NSDictionary* _aggregatorsByType;
	NSMapTable* _recordsByAggregator;

}
-(void)setConfiguration:(id)arg1 forAggregator:(id)arg2 ;
-(id)diagnosticDescription;
-(id)mergedConfiguration;
-(void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2 ;
-(id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4 ;
-(void)registerForCollectionWithState:(id)arg1 ;
-(id)lastDatumForType:(id)arg1 ;
-(id)identifierForAggregator:(id)arg1 ;
-(id)aggregatorForType:(id)arg1 ;
@end

