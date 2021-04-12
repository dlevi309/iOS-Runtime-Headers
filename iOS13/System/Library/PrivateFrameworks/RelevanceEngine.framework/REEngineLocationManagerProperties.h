/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class CLLocation, RELocationManager;


@protocol REEngineLocationManagerProperties <REExportedInterface>
@property (readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL monitoringLocation; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
@required
-(CLLocation *)location;
-(RELocationManager *)locationManager;
-(BOOL)monitoringLocation;

@end

