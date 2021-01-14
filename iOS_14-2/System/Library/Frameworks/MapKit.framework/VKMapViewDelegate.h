/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayerDidReloadStylesheet:(id)arg1;
-(void)mapLayerDidChangeSceneState:(id)arg1 withState:(unsigned long long)arg2;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapLayerWillEnterAR:(id)arg1;
-(void)mapLayerDidEnterAR:(id)arg1;
-(void)mapLayerWillExitAR:(id)arg1;
-(void)mapLayerDidExitAR:(id)arg1;
-(void)mapLayer:(id)arg1 didEncounterARError:(id)arg2;
-(void)mapLayer:(id)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
-(void)mapLayerARSessionInterruptionEnded:(id)arg1;
-(void)mapLayer:(id)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
-(void)mapLayerLabelsDidLayout:(id)arg1;
-(void)mapLayerWillStartFlyoverTour:(id)arg1;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapLayer:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)mapLayer:(id)arg1 flyoverModeWillChange:(int)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(SCD_Struct_MK1)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerDidChangeState:(id)arg2;
-(void)mapLayer:(id)arg1 labelMarkerDidChangeState:(id)arg2;
-(void)mapLayer:(id)arg1 willTransitionTo:(long long)arg2;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
-(void)mapLayer:(id)arg1 venueWithFocusDidChange:(id)arg2 building:(id)arg3;
-(void)mapLayer:(id)arg1 venueCreated:(id)arg2 venueCreatedBuilding:(id)arg3;
-(void)mapLayer:(id)arg1 nearestJunctionDidChange:(id)arg2 currentRoad:(id)arg3;

@end

