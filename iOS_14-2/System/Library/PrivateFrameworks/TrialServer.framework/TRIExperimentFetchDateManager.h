/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIDateProviding.h>

@class TRIKVStore, NSMutableDictionary;

@interface TRIExperimentFetchDateManager : NSObject <TRIDateProviding> {

	TRIKVStore* _keyValueStore;
	NSMutableDictionary* _cachedLastFetchExperimentDates;

}

@property (nonatomic,readonly) TRIKVStore * keyValueStore;                                        //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedLastFetchExperimentDates;              //@synthesize cachedLastFetchExperimentDates=_cachedLastFetchExperimentDates - In the implementation block
+(id)managerWithKeyValueStore:(id)arg1 ;
+(id)kvstoreKeyForContainer:(int)arg1 teamId:(id)arg2 ;
-(TRIKVStore *)keyValueStore;
-(id)initWithKeyValueStore:(id)arg1 ;
-(id)lastFetchExperimentDateForContainer:(int)arg1 teamId:(id)arg2 ;
-(void)updateLastFetchExperimentDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 ;
-(NSMutableDictionary *)cachedLastFetchExperimentDates;
@end

