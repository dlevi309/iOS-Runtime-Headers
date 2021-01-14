/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@class NSDictionary;

@interface ATXModeGlobals : NSObject {

	NSDictionary* _parameters;

}
+(id)sharedInstance;
-(id)init;
-(int)workLOISearchRadius;
-(id)initWithAssetClass:(Class)arg1 ;
-(int)frequentLOIMinimumVisits;
-(int)currentLocationUpdateInterval;
-(int)homeLOISearchRadius;
-(int)locationOfInterestUpdateInterval;
-(int)previousLOIExpirationTime;
-(int)predictedLocationsOfInterestUpdateInterval;
-(int)predictedExitTimesUpdateInterval;
-(int)locationOfInterestSearchRadius;
@end

