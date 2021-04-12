/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARGeoTrackingTechniqueProtocol <ARTechniqueProtocol>
@property (assign) double visualLocalizationCallInterval; 
@property (assign) double posteriorVisualLocalizationCallInterval; 
@property (assign) double visualLocalizationCallIntervalTimeThreshold; 
@property (assign) BOOL visualLocalizationUpdatesRequested; 
@property (assign) unsigned long long supportEnablementOptions; 
@required
-(double)visualLocalizationCallInterval;
-(void)setVisualLocalizationCallInterval:(double)arg1;
-(void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
-(BOOL)visualLocalizationUpdatesRequested;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg1;
-(unsigned long long)supportEnablementOptions;
-(void)setSupportEnablementOptions:(unsigned long long)arg1;
-(id);
-(void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
-(double)posteriorVisualLocalizationCallInterval;
-(double)visualLocalizationCallIntervalTimeThreshold;

@end

