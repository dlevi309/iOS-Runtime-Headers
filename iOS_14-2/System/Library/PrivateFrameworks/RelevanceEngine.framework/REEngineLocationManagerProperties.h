/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class CLLocation, RELocationManager;


@protocol REEngineLocationManagerProperties <REExportedInterface>
@property (readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL monitoringLocation; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
@required
-(RELocationManager *)locationManager;
-(CLLocation *)location;
-(BOOL)monitoringLocation;

@end

