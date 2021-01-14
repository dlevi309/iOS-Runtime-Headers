/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSDictionary;

@interface _MLCANENormalizationParameters : NSObject {

	NSDictionary* _normalizationParams;
	NSDictionary* _neuronParams;

}

@property (nonatomic,retain,readonly) NSDictionary * normalizationParams;              //@synthesize normalizationParams=_normalizationParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * neuronParams;                     //@synthesize neuronParams=_neuronParams - In the implementation block
+(id)normalizationUnitParametersWith:(id)arg1 neuronParams:(id)arg2 ;
-(NSDictionary *)neuronParams;
-(id)initWithNormalizationParams:(id)arg1 neuronParams:(id)arg2 ;
-(NSDictionary *)normalizationParams;
@end

