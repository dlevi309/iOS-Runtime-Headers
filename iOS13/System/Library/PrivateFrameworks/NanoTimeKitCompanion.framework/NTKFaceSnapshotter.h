/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKFaceSnapshottingWindow, NTKDelayedBlock;

@interface NTKFaceSnapshotter : NSObject {

	NTKFaceSnapshottingWindow* _snapshotWindow;
	NTKDelayedBlock* _hideSnapshotWindowBlock;

}
+(id)defaultModernSnapshotOptions;
+(id)renderSnapshotFromWindow:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_mainQueue_takeSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewControllerForFace:(id)arg1 withOptions:(id)arg2 ;
-(void)_showSnapshotWindowForDevice:(id)arg1 ;
-(void)_hideSnapshotWindow;
-(void)provideSnapshotOfFace:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

