/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@protocol TIUserModelDataStoring;
@class NSString, TIAnalyticsMetricsContext, NSDictionary, NSMutableDictionary;

@interface TIUserModelValues : NSObject {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	TIAnalyticsMetricsContext* _context;
	NSDictionary* _durableCounters;
	NSMutableDictionary* _transientCounters;
	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSString * inputMode;                                       //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) TIAnalyticsMetricsContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<TIUserModelDataStoring> userModelDataStore;              //@synthesize userModelStore=_userModelStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * durableCounters;                             //@synthesize durableCounters=_durableCounters - In the implementation block
@property (nonatomic,readonly) NSDictionary * settingsDictionary;                          //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
-(NSString *)inputMode;
-(id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5 ;
-(void)persistForDate:(id)arg1 ;
-(TIAnalyticsMetricsContext *)context;
-(void)loadTransientCounter:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(id)settingValueFromName:(id)arg1 ;
-(id)getTransientCounterForKey:(id)arg1 ;
-(void)addInteger:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(void)addDouble:(double)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(NSDictionary *)durableCounters;
-(int)indexFromCandidateLength:(int)arg1 forCounter:(id)arg2 ;
-(void)addEntry:(id)arg1 toCounter:(id)arg2 forDaysPrior:(int)arg3 ;
-(void)addToTransientCounterFromDatabaseEntry:(id)arg1 forDaysPrior:(int)arg2 ;
-(id<TIUserModelDataStoring>)userModelDataStore;
-(id)countsFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(id)aggregatedCountFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(NSDictionary *)settingsDictionary;
@end

