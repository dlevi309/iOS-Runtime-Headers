/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARRemoteGeoTrackingTechniqueService <ARRemoteTechniqueService>
@required
-(void)setVisualLocalizationCallInterval:(double)arg1;
-(void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg1;
-(void)setSupportEnablementOptions:(unsigned long long)arg1;
-(void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
-(void)getLocationFromWorldPosition:(id)arg1 reply:(/*^block*/id)arg2;
-(void)visualLocalizationCallIntervalWithReply:(/*^block*/id)arg1;
-(void)posteriorVisualLocalizationCallIntervalWithReply:(/*^block*/id)arg1;
-(void)visualLocalizationCallIntervalTimeThresholdWithReply:(/*^block*/id)arg1;
-(void)visualLocalizationUpdatesRequestedWithReply:(/*^block*/id)arg1;
-(void)supportEnablementOptionsWithReply:(/*^block*/id)arg1;

@end

