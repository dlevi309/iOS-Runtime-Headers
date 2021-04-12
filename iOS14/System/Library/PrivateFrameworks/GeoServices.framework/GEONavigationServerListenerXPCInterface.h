/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEONavigationServerListenerXPCInterface <NSObject>
@required
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
-(void)currentRoadNameUpdated:(id)arg1;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
-(void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;

@end

