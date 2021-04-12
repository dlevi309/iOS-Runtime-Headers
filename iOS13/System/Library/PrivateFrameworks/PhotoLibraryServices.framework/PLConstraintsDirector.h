/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, PLForegroundMonitor, PLPhotoAnalysisServiceClient, NSString;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate> {

	BOOL _didTransitionToOpportunisticDisallowed;
	BOOL _photosAppInForeground;
	BOOL _cameraAppInForeground;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _bonusTimer;
	PLForegroundMonitor* _foregroundMonitor;
	PLPhotoAnalysisServiceClient* _photoAnalysisServiceClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
+(BOOL)_photoanalysisdIsRunning;
-(BOOL)shouldScheduleUserInitiatedAnalysisForAssets;
-(void)informOpportunisticTasksAllowed:(BOOL)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_disableAutoFGAndUserFGConstraints;
-(void)_addBonusTime;
-(id)initWithPhotoAnalysisClient:(id)arg1 ;
-(void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)arg1 ;
-(void)informCameraAppForegroundState:(BOOL)arg1 ;
@end

