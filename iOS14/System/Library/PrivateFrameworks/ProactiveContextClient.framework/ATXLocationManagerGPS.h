/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

@class CLLocation;


@protocol ATXLocationManagerGPS
@property (assign,nonatomic,__weak) id<ATXLocationManagerGPSDelegate> delegate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL locationEnabled; 
@property (nonatomic,readonly) BOOL preciseLocationEnabled; 
@required
-(void)stopMonitoringRegionWithIdentifier:(id)arg1;
-(BOOL)preciseLocationEnabled;
-(long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
-(BOOL)locationEnabled;
-(void)beginMonitoringRegion:(id)arg1;
-(id<ATXLocationManagerGPSDelegate>)delegate;
-(CLLocation *)location;
-(void)setDelegate:(id)arg1;
-(id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(BOOL)arg2;
-(void)updateLocationWithCompletionHandler:(/*^block*/id)arg1;

@end

