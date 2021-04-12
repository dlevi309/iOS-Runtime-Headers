/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLMomentGenerationUtils : NSObject
+(unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(BOOL)arg4 ;
+(void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(BOOL)arg4 ;
+(BOOL)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(BOOL)arg3 horizontalAccuracy:(double)arg4 ;
+(BOOL)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(BOOL)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(id)sortedOverlappingFrequentLocations:(id)arg1 ;
+(id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3 ;
@end

