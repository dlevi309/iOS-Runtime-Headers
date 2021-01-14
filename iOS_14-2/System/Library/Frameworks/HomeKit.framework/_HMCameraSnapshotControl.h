/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraControl.h>

@protocol _HMCameraSnapshotControlDelegate;
@class HMCameraSnapshot;

@interface _HMCameraSnapshotControl : _HMCameraControl {

	HMCameraSnapshot* _mostRecentSnapshot;
	id<_HMCameraSnapshotControlDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HMCameraSnapshotControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMCameraSnapshot * mostRecentSnapshot;                             //@synthesize mostRecentSnapshot=_mostRecentSnapshot - In the implementation block
-(id<_HMCameraSnapshotControlDelegate>)delegate;
-(void)takeSnapshot;
-(void)_takeSnapshot;
-(void)setDelegate:(id<_HMCameraSnapshotControlDelegate>)arg1 ;
-(void)_handleMostSnapshot:(id)arg1 ;
-(void)_callDelegate:(id)arg1 error:(id)arg2 ;
-(void)_handleSnapshot:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 mostRecent:(BOOL)arg4 ;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)setMostRecentSnapshot:(HMCameraSnapshot *)arg1 ;
-(void)_callMostRecentSnapshotUpdateDelegate;
-(void)_fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleCreateSnapshotWithBulletinContext:(id)arg1 error:(id)arg2 cameraSessionID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_mergeNewSnapshot:(id)arg1 operations:(id)arg2 ;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 mostRecentSnapshot:(id)arg4 ;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
@end

