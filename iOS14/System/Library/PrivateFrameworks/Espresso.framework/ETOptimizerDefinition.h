/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSDictionary;

@interface ETOptimizerDefinition : NSObject {

	long long _type;
	NSDictionary* _optimizationParameters;

}

@property (readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * optimizationParameters;              //@synthesize optimizationParameters=_optimizationParameters - In the implementation block
-(NSDictionary *)optimizationParameters;
-(long long)type;
-(id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id*)arg3 ;
@end

