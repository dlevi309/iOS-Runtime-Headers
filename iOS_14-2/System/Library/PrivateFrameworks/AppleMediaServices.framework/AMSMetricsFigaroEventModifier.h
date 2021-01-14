/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject {

	NSDictionary* _fieldFilters;
	NSString* _sampleSessionKey;
	NSDictionary* _metricsDictionary;
	NSDictionary* _overrideDictionary;

}

@property (nonatomic,readonly) NSDictionary * fieldFilters;                    //@synthesize fieldFilters=_fieldFilters - In the implementation block
@property (nonatomic,readonly) NSDictionary * metricsDictionary;               //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * overrideDictionary;              //@synthesize overrideDictionary=_overrideDictionary - In the implementation block
@property (nonatomic,readonly) NSString * sampleSessionKey;                    //@synthesize sampleSessionKey=_sampleSessionKey - In the implementation block
@property (nonatomic,readonly) double flushInterval; 
-(id)prepareEvent:(id)arg1 ;
-(BOOL)shouldSkipEvent:(id)arg1 ;
-(BOOL)fieldFiltersMatchEvent:(id)arg1 ;
-(NSDictionary *)metricsDictionary;
-(id)_createSampleSessionKey;
-(NSString *)sampleSessionKey;
-(NSDictionary *)overrideDictionary;
-(BOOL)shouldDropEvent:(id)arg1 ;
-(id)initWithMetricsDictionary:(id)arg1 overrideDictionary:(id)arg2 ;
-(NSDictionary *)fieldFilters;
-(BOOL)_shouldSampleEvent:(id)arg1 ;
-(double)flushInterval;
-(id)reportingURLForEvent:(id)arg1 ;
-(id)_fieldFiltersFromOverrides:(id)arg1 ;
-(id)_overridePropertyForKey:(id)arg1 ;
@end

