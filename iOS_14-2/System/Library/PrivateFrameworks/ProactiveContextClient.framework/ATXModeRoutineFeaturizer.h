/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXLocationManagerProtocolATXLocationOfInterestManagerProtocol, ATXModeFeaturizerDelegate;
@class CLCircularRegion, NSString;

@interface ATXModeRoutineFeaturizer : NSObject <ATXModeFeaturizer> {

	id<ATXLocationManagerProtocol><ATXLocationOfInterestManagerProtocol> _locationManager;
	CLCircularRegion* _homeLOIRegion;
	CLCircularRegion* _workLOIRegion;
	id<ATXModeFeaturizerDelegate> _delegate;
	double _homeLOISearchRadius;
	double _workLOISearchRadius;

}

@property (assign) double homeLOISearchRadius;                                           //@synthesize homeLOISearchRadius=_homeLOISearchRadius - In the implementation block
@property (assign) double workLOISearchRadius;                                           //@synthesize workLOISearchRadius=_workLOISearchRadius - In the implementation block
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopListening;
-(id)init;
-(double)workLOISearchRadius;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(double)homeLOISearchRadius;
-(void)dealloc;
-(id)initWithLocationManager:(id)arg1 ;
-(id)provideFeatures;
-(void)_locationManagerDidEnterRegion:(id)arg1 ;
-(void)_locationManagerDidExitRegion:(id)arg1 ;
-(void)_routineLocationsOfInterestDidChange:(id)arg1 ;
-(void)_updateLOIAndUpdateFeatures;
-(BOOL)isInRegion:(id)arg1 ;
-(void)beginMonitoringForLocation:(id)arg1 radius:(double)arg2 type:(long long)arg3 ;
-(void)_watchRegionForLOIType:(long long)arg1 ;
-(void)setHomeLOISearchRadius:(double)arg1 ;
-(void)setWorkLOISearchRadius:(double)arg1 ;
@end

