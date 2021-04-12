/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLTripProcessor : NSObject
+(id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisitDate:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
+(double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2 ;
+(unsigned long long)_numberOfAssetsInItems:(id)arg1 ;
+(double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2 ;
+(id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2 ;
@end

