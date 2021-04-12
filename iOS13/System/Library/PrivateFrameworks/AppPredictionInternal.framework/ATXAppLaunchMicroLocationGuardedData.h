/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDictionary, NSDate, ATXLocationToLaunchCorrelation;

@interface ATXAppLaunchMicroLocationGuardedData : NSObject {

	NSDictionary* _currentMicroLocation;
	NSDate* _currentMicroLocationDate;
	ATXLocationToLaunchCorrelation* _locationToAppLaunchCorrelation;
	ATXLocationToLaunchCorrelation* _locationToActionKeyCorrelation;

}
-(id)initWithCurrentMicroLocation:(id)arg1 ;
-(void)setCurrentMicroLocation:(id)arg1 ;
-(id)getCurrentMicroLocation;
-(BOOL)microLocationExpired:(id)arg1 ;
@end

