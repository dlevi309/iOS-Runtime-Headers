/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDistanceCalculator, RTMapItemProviderBaseParameters;

@interface RTMapItemProviderBase : NSObject {

	RTDistanceCalculator* _distanceCalculator;
	RTMapItemProviderBaseParameters* _baseParameters;

}

@property (nonatomic,readonly) RTMapItemProviderBaseParameters * baseParameters;              //@synthesize baseParameters=_baseParameters - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                     //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
-(id)init;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 ;
-(id)filterInferredMapItems:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 andAppendSource:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithDistanceCalculator:(id)arg1 parameters:(id)arg2 ;
-(BOOL)mapItemCloseEnough:(id)arg1 referenceLocation:(id)arg2 distanceThreshold:(double)arg3 error:(id*)arg4 ;
-(id)filter:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 andAppendSource:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)filter:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 error:(id*)arg4 ;
-(id)filterInferredMapItems:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 error:(id*)arg4 ;
-(RTMapItemProviderBaseParameters *)baseParameters;
@end

