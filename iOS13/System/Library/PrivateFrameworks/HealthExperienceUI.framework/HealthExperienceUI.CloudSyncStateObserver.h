/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

