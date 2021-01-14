/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@interface CLIndoorCommonHooks : NSObject
+(id)nearestVenues:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(const NearestVenueSettings*)arg5 isAllowedMultipleVenues:(BOOL)arg6 ;
+(id)filterLocationGroups:(id)arg1 isRegionalSupported:(BOOL)arg2 ;
@end

