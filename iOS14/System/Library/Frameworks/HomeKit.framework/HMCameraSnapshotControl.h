/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSnapshotControl:(id)arg1 ;
-(_HMCameraSnapshotControl *)snapshotControl;
-(void)setSnapshotControl:(_HMCameraSnapshotControl *)arg1 ;
-(void)takeSnapshot;
-(void)setDelegate:(id<HMCameraSnapshotControlDelegate>)arg1 ;
-(HMCameraSnapshot *)mostRecentSnapshot;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

