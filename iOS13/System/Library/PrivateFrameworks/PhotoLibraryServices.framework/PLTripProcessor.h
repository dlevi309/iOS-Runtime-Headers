/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLTripProcessor : NSObject
+(id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisit:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
+(double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2 ;
+(unsigned long long)_numberOfAssetsInItems:(id)arg1 ;
+(double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2 ;
+(id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2 ;
@end

