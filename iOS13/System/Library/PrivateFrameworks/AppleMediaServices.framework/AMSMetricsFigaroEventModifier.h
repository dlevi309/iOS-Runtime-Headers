/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)metricsDictionary;
-(id)initWithMetricsDictionary:(id)arg1 matchedOverrideDictionary:(id)arg2 ;
-(BOOL)fieldFiltersMatchEvent:(id)arg1 ;
-(id)_fieldFiltersFromOverrides:(id)arg1 ;
-(id)_createSampleSessionKey;
-(NSDictionary *)fieldFilters;
-(id)_overridePropertyForKey:(id)arg1 ;
-(BOOL)_shouldSampleEvent:(id)arg1 ;
-(NSDictionary *)overrideDictionary;
-(NSString *)sampleSessionKey;
-(id)prepareEvent:(id)arg1 ;
-(id)reportingURLForEvent:(id)arg1 ;
-(BOOL)shouldDropEvent:(id)arg1 ;
-(BOOL)shouldSkipEvent:(id)arg1 ;
@end

