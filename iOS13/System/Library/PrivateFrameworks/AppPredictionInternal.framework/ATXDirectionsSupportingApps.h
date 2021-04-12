/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSSet;

@interface ATXDirectionsSupportingApps : NSObject {

	NSSet* _blacklistApps;

}
+(BOOL)_directionsModesSupportTransit:(id)arg1 ;
+(BOOL)_directionsModesSupportRide:(id)arg1 ;
+(BOOL)_directionsModesSupportAutomobile:(id)arg1 ;
-(id)init;
-(id)initWithBlacklistApps:(id)arg1 ;
-(id)supportedDirectionsApps;
-(id)allEligibleLocationsApplications;
@end

