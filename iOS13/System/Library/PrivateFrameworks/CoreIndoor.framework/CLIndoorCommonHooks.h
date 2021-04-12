/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@interface CLIndoorCommonHooks : NSObject
+(id)filterLocationGroups:(id)arg1 isRegionalSupported:(BOOL)arg2 ;
+(id)nearestVenues:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(const NearestVenueSettings*)arg5 isAllowedMultipleVenues:(BOOL)arg6 ;
@end

