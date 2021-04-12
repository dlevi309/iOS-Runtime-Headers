/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEONavigationServerListenerXPCInterface <NSObject>
@required
-(void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
-(void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(id)arg1;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
-(void)currentRoadNameUpdated:(id)arg1;

@end

