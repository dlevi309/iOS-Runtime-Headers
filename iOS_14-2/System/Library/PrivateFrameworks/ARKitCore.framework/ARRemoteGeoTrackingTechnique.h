/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARRemoteTechnique.h>
#import <ARKitCore/ARGeoTrackingTechniqueProtocol.h>

@class NSNumber, NSArray;

@interface ARRemoteGeoTrackingTechnique : ARRemoteTechnique <ARGeoTrackingTechniqueProtocol>

@property (assign) double visualLocalizationCallInterval; 
@property (assign) double posteriorVisualLocalizationCallInterval; 
@property (assign) double visualLocalizationCallIntervalTimeThreshold; 
@property (assign) BOOL visualLocalizationUpdatesRequested; 
@property (assign) unsigned long long supportEnablementOptions; 
@property (__weak) id<ARTechniqueDelegate> delegate; 
@property (assign) unsigned long long powerUsage; 
@property (assign) double bonusLatency; 
@property (readonly) NSNumber * traceKey; 
@property (retain) NSArray * splitTechniques; 
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy; 
+(id)new;
-(id)init;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(double)visualLocalizationCallInterval;
-(void)setVisualLocalizationCallInterval:(double)arg1 ;
-(void)setPosteriorVisualLocalizationCallInterval:(double)arg1 ;
-(BOOL)visualLocalizationUpdatesRequested;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg1 ;
-(unsigned long long)supportEnablementOptions;
-(void)setSupportEnablementOptions:(unsigned long long)arg1 ;
-(id)initWithServerConnection:(id)arg1 ;
-(4)getLocationFromWorldPosition:(id*)arg1 ;
-(void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1 ;
-(double)posteriorVisualLocalizationCallInterval;
-(double)visualLocalizationCallIntervalTimeThreshold;
@end

