/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _PASLock;

@interface ATXLocationToLaunchCorrelation : NSObject <NSCopying, NSSecureCoding> {

	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(double)_launchProbabilityForEvent:(id)arg1 atLocation:(id)arg2 correlationMatrix:(id)arg3 locationTotals:(id)arg4 ;
+(double)_totalLaunchesAtLocation:(id)arg1 locationTotals:(id)arg2 ;
+(double)_totalLaunchesForEvent:(id)arg1 atLocation:(id)arg2 correlationMatrix:(id)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)totalLaunches;
-(id)initWithCorrelationMatrix:(id)arg1 locationTotals:(id)arg2 ;
-(void)addVisitForLocation:(id)arg1 event:(id)arg2 value:(double)arg3 ;
-(double)launchProbabilityForEvent:(id)arg1 atLocation:(id)arg2 ;
-(double)totalLaunchesForEvent:(id)arg1 atLocation:(id)arg2 ;
-(double)totalLaunchesAtLocation:(id)arg1 ;
-(double)launchProbabilityForEvent:(id)arg1 atLocationsWithProbabilities:(id)arg2 ;
@end

