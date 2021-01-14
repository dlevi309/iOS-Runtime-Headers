/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTLocationManager, NSString;

@interface RTVisitPipelineModuleAltitudeEstimator : NSObject <RTVisitPipelineModule> {

	double _maxHorizontalAccuracy;
	RTLocationManager* _locationManager;
	double _estimatedAltitude;
	double _estimatedVerticalUncertainty;

}

@property (nonatomic,readonly) double maxHorizontalAccuracy;                     //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) double estimatedAltitude;                           //@synthesize estimatedAltitude=_estimatedAltitude - In the implementation block
@property (assign,nonatomic) double estimatedVerticalUncertainty;                //@synthesize estimatedVerticalUncertainty=_estimatedVerticalUncertainty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTLocationManager *)locationManager;
-(double)maxHorizontalAccuracy;
-(id)init;
-(id)process:(id)arg1 ;
-(id)initWithMaxHorizontalAccuracy:(double)arg1 locationManager:(id)arg2 ;
-(void)initializeZAxisParameters;
-(id)dateIntervalForAltitudeEstimation:(id)arg1 ;
-(void)updateAltitudeForCentroid:(id)arg1 locations:(id)arg2 ;
-(id)updateAltitudeforVisit:(id)arg1 ;
-(double)estimatedAltitude;
-(void)setEstimatedAltitude:(double)arg1 ;
-(double)estimatedVerticalUncertainty;
-(void)setEstimatedVerticalUncertainty:(double)arg1 ;
@end

