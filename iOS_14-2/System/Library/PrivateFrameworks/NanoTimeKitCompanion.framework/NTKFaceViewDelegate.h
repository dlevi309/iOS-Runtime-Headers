/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKFaceViewDelegate <NSObject>
@required
-(void)faceViewWantsToPresentViewController:(id)arg1;
-(id)faceViewComplicationAppIdentifierForSlot:(id)arg1;
-(id)faceViewComplicationForSlot:(id)arg1;
-(BOOL)faceViewComplicationIsEmptyForSlot:(id)arg1;
-(void)faceViewDidChangeWantsStatusBarIconShadow;
-(void)faceViewDidChangePaddingForStatusBar;
-(void)faceViewRequestedLaunchFromRect:(CGRect)arg1;
-(void)faceViewWantsComplicationKeylineFramesReloaded;
-(void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
-(void)faceViewWillEnterTimeTravel;
-(void)faceViewDidScrubToDate:(id)arg1 forced:(BOOL)arg2;
-(void)faceViewWillExitTimeTravel;
-(void)faceViewWillUnloadSnapshotContentViews;
-(void)faceViewDidReloadSnapshotContentViews;
-(void)faceViewWantsUnadornedSnapshotViewRemoved;
-(void)faceViewDidHideOrShowComplicationSlot;
-(void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(BOOL)arg2;
-(BOOL)faceView:(id)arg1 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg2;
-(BOOL)faceViewShouldIgnoreSnapshotImages;
-(id)faceViewComplicationSlots;
-(id)faceViewEditOptionThatHidesAllComplications;
-(id)faceViewComplicationSlotsHiddenByEditOption:(id)arg1;
-(id)faceViewAllVisibleComplicationsForCurrentConfiguration;
-(id)faceViewDidRequestCustomDataForKey:(id)arg1;
-(void)faceViewDidUpdateCustomData:(id)arg1 forKey:(id)arg2;

@end

