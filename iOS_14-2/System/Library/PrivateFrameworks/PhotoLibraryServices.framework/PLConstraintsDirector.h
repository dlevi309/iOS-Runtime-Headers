/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, PLForegroundMonitor, PLPhotoAnalysisServiceClient, NSURL, NSString;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate> {

	BOOL _didTransitionToOpportunisticDisallowed;
	BOOL _photosAppInForeground;
	BOOL _cameraAppInForeground;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _bonusTimer;
	PLForegroundMonitor* _foregroundMonitor;
	PLPhotoAnalysisServiceClient* _photoAnalysisServiceClient;
	long long _faceQuickClassificationRequestID;
	NSURL* _photoLibraryURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_photoanalysisdIsRunning;
+(BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(void)informOpportunisticTasksAllowed:(BOOL)arg1 ;
-(BOOL)shouldScheduleUserInitiatedAnalysisForAssets;
-(void)informCameraAppForegroundState:(BOOL)arg1 ;
-(void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)arg1 ;
-(void)_addBonusTime;
-(void)_disableAutoFGAndUserFGConstraints;
-(id)initWithPhotoAnalysisClient:(id)arg1 photoLibraryURL:(id)arg2 ;
@end

