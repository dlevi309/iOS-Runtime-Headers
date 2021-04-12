/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARTechniqueService.h>
#import <ARKitCore/ARRemoteGeoTrackingTechniqueService.h>

@class NSString;

@interface ARGeoTrackingTechniqueService : ARTechniqueService <ARRemoteGeoTrackingTechniqueService> {

	double _latestLocationDataTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceName;
-(id)processData:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(id)processLocationData:(id)arg1 ;
-(void)setVisualLocalizationCallInterval:(double)arg1 ;
-(void)setPosteriorVisualLocalizationCallInterval:(double)arg1 ;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg1 ;
-(void)setSupportEnablementOptions:(unsigned long long)arg1 ;
-(void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1 ;
-(void)getLocationFromWorldPosition:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)visualLocalizationCallIntervalWithReply:(/*^block*/id)arg1 ;
-(void)posteriorVisualLocalizationCallIntervalWithReply:(/*^block*/id)arg1 ;
-(void)visualLocalizationCallIntervalTimeThresholdWithReply:(/*^block*/id)arg1 ;
-(void)visualLocalizationUpdatesRequestedWithReply:(/*^block*/id)arg1 ;
-(void)supportEnablementOptionsWithReply:(/*^block*/id)arg1 ;
@end

