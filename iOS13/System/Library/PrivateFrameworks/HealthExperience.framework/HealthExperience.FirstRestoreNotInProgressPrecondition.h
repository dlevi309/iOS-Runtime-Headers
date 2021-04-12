/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <libobjc.A.dylib/HKCloudSyncObserverDelegate.h>

@class NSString;

@interface HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject <HKCloudSyncObserverDelegate> {

	 cloudSyncObserver;
	 preconditionCompletion;
	 healthStore;
	 waitUntilShouldProceed;
	 completionQueue;

}

@property (readonly,nonatomic) NSString * description; 
-(void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2 ;
-(void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2 ;
-(void)cloudSyncObserverSyncCompleted:(id)arg1 ;
-(void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

