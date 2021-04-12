/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)diagnosticDescription;
-(id)aggregatorForType:(id)arg1 ;
-(id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4 ;
-(void)registerForCollectionWithState:(id)arg1 ;
-(id)mergedConfiguration;
-(id)lastDatumForType:(id)arg1 ;
-(void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2 ;
-(void)setConfiguration:(id)arg1 forAggregator:(id)arg2 ;
-(id)identifierForAggregator:(id)arg1 ;
@end

