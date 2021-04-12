/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLMomentGenerationUtils : NSObject
+(void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(BOOL)arg4 ;
+(BOOL)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(BOOL)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(BOOL)arg4 ;
+(unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(BOOL)arg3 ;
+(BOOL)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2 ;
+(id)sortedOverlappingFrequentLocations:(id)arg1 ;
+(id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3 ;
@end

