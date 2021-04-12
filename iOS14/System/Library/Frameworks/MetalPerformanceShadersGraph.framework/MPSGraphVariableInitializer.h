/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/


@class NSString;

@interface MPSGraphVariableInitializer : NSObject {

	double _constant;
	double _minimum;
	double _maximum;
	NSString* _file;
	unsigned _initializerType;

}

@property (nonatomic,readonly) unsigned initializerType;              //@synthesize initializerType=_initializerType - In the implementation block
+(id)initializerWithConstant:(double)arg1 ;
+(id)initializerWithZeros;
+(id)initializerWithOnes;
+(id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)initializerWithFile:(id)arg1 ;
-(id)init;
-(id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
-(unsigned)initializerType;
@end

