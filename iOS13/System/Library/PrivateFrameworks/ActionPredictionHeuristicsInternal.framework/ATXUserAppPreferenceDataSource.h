/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(BOOL)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2 ;
-(BOOL)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3 ;
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

