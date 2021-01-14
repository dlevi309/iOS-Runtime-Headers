/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol GEONavigationListenerDelegate <NSObject>
@optional
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateActiveRouteData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepNameInfo:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRideSelections:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromSign:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromManeuver:(SCD_Struct_PP28)arg2;
-(void)navigationListener:(id)arg1 didUpdateNavigationVoiceVolume:(int)arg2;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;

@end

