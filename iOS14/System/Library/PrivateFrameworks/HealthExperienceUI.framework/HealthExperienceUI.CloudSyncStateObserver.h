/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <libobjc.A.dylib/HKCloudSyncObserverDelegate.h>

@interface HealthExperienceUI.CloudSyncStateObserver : NSObject <HKCloudSyncObserverDelegate> {

	 _cachedFirstRestoreState;
	 firstRestoreStateChangeHandler;
	 stateChangeHandler;
	 cloudSyncObserver;
	 store;

}
-(void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2 ;
-(void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2 ;
-(void)cloudSyncObserverSyncCompleted:(id)arg1 ;
-(void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2 ;
-(id)init;
@end

