/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraSnapshotControlDelegate.h>

@protocol HMCameraSnapshotControlDelegate;
@class HMFUnfairLock, _HMCameraSnapshotControl, HMCameraSnapshot, NSString;

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {

	HMFUnfairLock* _lock;
	id<HMCameraSnapshotControlDelegate> _delegate;
	_HMCameraSnapshotControl* _snapshotControl;

}

@property (nonatomic,retain) _HMCameraSnapshotControl * snapshotControl;                       //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraSnapshotControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraSnapshot * mostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMCameraSnapshotControlDelegate>)delegate;
-(void)setDelegate:(id<HMCameraSnapshotControlDelegate>)arg1 ;
-(void)takeSnapshot;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSnapshotControl:(id)arg1 ;
-(_HMCameraSnapshotControl *)snapshotControl;
-(void)setSnapshotControl:(_HMCameraSnapshotControl *)arg1 ;
@end

