/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKFaceViewDelegate <NSObject>
@required
-(void)faceViewWantsToPresentViewController:(id)arg1;
-(id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
-(id)faceViewComplicationForSlot:(id)arg1;
-(void)faceViewWantsComplicationKeylineFramesReloaded;
-(void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
-(BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
-(void)faceViewDidChangeWantsStatusBarIconShadow;
-(void)faceViewDidChangePaddingForStatusBar;
-(void)faceViewRequestedLaunchFromRect:(CGRect)arg1;
-(void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
-(void)faceViewWillEnterTimeTravel;
-(void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
-(void)faceViewWillExitTimeTravel;
-(void)faceViewWillUnloadSnapshotContentViews;
-(void)faceViewDidReloadSnapshotContentViews;
-(void)faceViewWantsUnadornedSnapshotViewRemoved;
-(void)faceViewDidHideOrShowComplicationSlot;
-(BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;
-(BOOL)faceViewShouldIgnoreSnapshotImages;
-(id)faceViewComplicationSlots;
-(id)faceViewEditOptionThatHidesAllComplications;
-(id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
-(id)faceViewAllVisibleComplicationsForCurrentConfiguration;

@end

