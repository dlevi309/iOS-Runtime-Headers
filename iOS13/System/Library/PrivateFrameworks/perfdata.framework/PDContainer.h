/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface PDContainer : NSObject {

	BOOL _largerBetter;
	NSString* _name;
	unsigned long long _version;
	NSDictionary* _configuration;
	NSMutableDictionary* _extensions;
	NSString* _testDescription;
	NSString* _notes;
	NSString* _primaryMetricFilter;
	NSString* _generator;
	NSDictionary* _variables;
	NSDictionary* _labels;
	NSMutableDictionary* _perfdata;

}

@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extensions;                     //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,retain) NSString * testDescription;                           //@synthesize testDescription=_testDescription - In the implementation block
@property (nonatomic,retain) NSString * notes;                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSString * generator;                                 //@synthesize generator=_generator - In the implementation block
@property (assign,nonatomic) BOOL largerBetter;                                    //@synthesize largerBetter=_largerBetter - In the implementation block
@property (nonatomic,retain) NSDictionary * variables;                             //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                                //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perfdata;                       //@synthesize perfdata=_perfdata - In the implementation block
@property (nonatomic,retain,readonly) NSString * primaryMetricFilter;              //@synthesize primaryMetricFilter=_primaryMetricFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long measurementCount; 
+(id)containerWithJSONDictionary:(id)arg1 error:(id*)arg2 ;
+(id)containerWithPath:(id)arg1 error:(id*)arg2 ;
+(id)containerWithFileURL:(id)arg1 error:(id*)arg2 ;
+(id)containerWithJSONData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSDictionary *)labels;
-(void)setLabels:(NSDictionary *)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)extensions;
-(NSString *)generator;
-(void)setGenerator:(NSString *)arg1 ;
-(void)setExtensions:(NSMutableDictionary *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSDictionary *)variables;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isComparableTo:(id)arg1 ;
-(BOOL)enumerateMeasurementsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)largerBetter;
-(NSString *)testDescription;
-(void)setVariables:(NSDictionary *)arg1 ;
-(void)setLargerBetter:(BOOL)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONData:(id)arg1 error:(id*)arg2 ;
-(void)setPerfdata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)perfdata;
-(void)setTestDescription:(NSString *)arg1 ;
-(BOOL)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isLike:(id)arg1 ;
-(unsigned long long)measurementCount;
-(BOOL)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2 ;
-(NSString *)primaryMetricFilter;
@end

