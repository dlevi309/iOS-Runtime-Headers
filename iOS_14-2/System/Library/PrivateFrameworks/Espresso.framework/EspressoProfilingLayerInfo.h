/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSString, EspressoProfilingLayerSupportInfo, NSDictionary, NSArray;

@interface EspressoProfilingLayerInfo : NSObject {

	int _selected_runtime_engine;
	NSString* _name;
	NSString* _debug_name;
	EspressoProfilingLayerSupportInfo* _main_engine_support;
	NSDictionary* _per_platform_support;
	NSArray* _runtimes;
	double _average_runtime;

}

@property (retain) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (retain) NSString * debug_name;                                                //@synthesize debug_name=_debug_name - In the implementation block
@property (assign) int selected_runtime_engine;                                          //@synthesize selected_runtime_engine=_selected_runtime_engine - In the implementation block
@property (retain) EspressoProfilingLayerSupportInfo * main_engine_support;              //@synthesize main_engine_support=_main_engine_support - In the implementation block
@property (retain) NSDictionary * per_platform_support;                                  //@synthesize per_platform_support=_per_platform_support - In the implementation block
@property (retain) NSArray * runtimes;                                                   //@synthesize runtimes=_runtimes - In the implementation block
@property (assign) double average_runtime;                                               //@synthesize average_runtime=_average_runtime - In the implementation block
-(NSString *)name;
-(NSArray *)runtimes;
-(void)setName:(NSString *)arg1 ;
-(NSString *)debug_name;
-(int)selected_runtime_engine;
-(void)setDebug_name:(NSString *)arg1 ;
-(void)setSelected_runtime_engine:(int)arg1 ;
-(EspressoProfilingLayerSupportInfo *)main_engine_support;
-(void)setMain_engine_support:(EspressoProfilingLayerSupportInfo *)arg1 ;
-(NSDictionary *)per_platform_support;
-(void)setPer_platform_support:(NSDictionary *)arg1 ;
-(void)setRuntimes:(NSArray *)arg1 ;
-(double)average_runtime;
-(void)setAverage_runtime:(double)arg1 ;
@end

