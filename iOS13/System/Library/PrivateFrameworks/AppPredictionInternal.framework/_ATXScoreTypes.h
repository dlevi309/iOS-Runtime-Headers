/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface _ATXScoreTypes : NSObject
+(void)iterScoreInputsWithBlock:(/*^block*/id)arg1 ;
+(id)stringForScoreInput:(unsigned long long)arg1 ;
+(unsigned long long)scoreInputForString:(id)arg1 ;
+(id)aggdStringForScoreInput:(unsigned long long)arg1 ;
+(id)scoreInputsToNames;
+(unsigned long long)mappingForTopRankedGeoHashSignalsWithResolution:(unsigned long long)arg1 withRank:(unsigned long long)arg2 forScoreInputCategory:(unsigned long long)arg3 ;
+(unsigned long long)mappingForTimeOfDayDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForDayOfWeekDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForTopRankedSpecificGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForTopRankedCoarseGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForTopRankedZoom7GeoHashSignals:(unsigned long long)arg1 ;
@end

