/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2 ;
-(BOOL)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3 ;
@end

