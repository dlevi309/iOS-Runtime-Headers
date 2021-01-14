/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEONavigationServerPushStateXPCInterface <NSObject>
@required
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1;
-(void)setNavigationVoiceVolumeWithData:(id)arg1;
-(void)setRouteSummaryWithStepIndexData:(id)arg1;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg1;
-(void)setCurrentRoadName:(id)arg1;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg1;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg1;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;

@end

