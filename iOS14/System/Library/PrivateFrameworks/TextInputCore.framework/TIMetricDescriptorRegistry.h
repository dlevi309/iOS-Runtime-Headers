/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface TIMetricDescriptorRegistry : NSObject {

	BOOL _loaded;
	NSDictionary* _config;
	NSMutableDictionary* _metricDescriptors;
	NSMutableSet* _invalidMetricNames;

}

@property (nonatomic,readonly) NSDictionary * config;                                //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metricDescriptors;              //@synthesize metricDescriptors=_metricDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableSet * invalidMetricNames;                    //@synthesize invalidMetricNames=_invalidMetricNames - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                            //@synthesize loaded=_loaded - In the implementation block
+(id)registryWithConfig:(id)arg1 ;
+(id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2 ;
-(NSDictionary *)config;
-(BOOL)loaded;
-(id)initWithConfig:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2 ;
-(id)metricDescriptorWithName:(id)arg1 ;
-(void)loadMetricDescriptors;
-(id)contextFromError:(id)arg1 ;
-(id)valueFromError:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)metricDescriptors;
-(NSMutableSet *)invalidMetricNames;
@end

