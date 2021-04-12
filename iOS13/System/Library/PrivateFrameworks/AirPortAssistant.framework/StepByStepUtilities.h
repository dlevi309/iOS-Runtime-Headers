/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@interface StepByStepUtilities : NSObject
+(id)getProductLocalizedStringWithFormat:(id)arg1 fromParamDict:(id)arg2 ;
+(long long)selectorChoiceToMatrixTag:(int)arg1 ;
+(long long)autoGuessRecommendationToMatrixTag:(id)arg1 ;
+(int)matrixTagToSelectorChoice:(long long)arg1 ;
+(id)nameForNetworkOrDevice:(id)arg1 ;
+(id)productIDForNetworkOrDevice:(id)arg1 ;
+(id)selectorChoiceToReplaceOption:(int)arg1 ;
+(void)formatRecommendation:(id)arg1 fromParamDict:(id)arg2 forStep:(int)arg3 restoreString:(id*)arg4 restoreSpecificString:(id*)arg5 dontRecommendString:(id*)arg6 ;
+(unsigned)getProductIDFromParamDict:(id)arg1 ;
+(int)getDeviceKindFromParamDict:(id)arg1 ;
+(id)findSourceBaseByName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceBaseByRadioName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceNetworkByName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceConfigByName:(id)arg1 fromParamDict:(id)arg2 ;
@end

