/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKGreenfieldAddWatchFaceManagerDelegate <NSObject>
@required
-(void)didStartLoadingInAddWatchFaceManager:(id)arg1;
-(void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg2;
-(void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(BOOL)arg3;
-(void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2;

@end

