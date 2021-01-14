/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TATrackingAvoidanceServiceObserver.h>
#import <libobjc.A.dylib/TAPersistenceManagerObserver.h>

@class TAAnalyticsManagerSettings, NSString;

@interface TAAnalyticsManager : NSObject <TATrackingAvoidanceServiceObserver, TAPersistenceManagerObserver> {

	TAAnalyticsManagerSettings* _settings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_convertDetection:(id)arg1 service:(id)arg2 ;
+(id)_convertScanRequest:(id)arg1 service:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2 ;
-(void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2 ;
-(void)_submitEvent:(id)arg1 content:(id)arg2 ;
-(void)didWriteToURL:(id)arg1 bytes:(unsigned long long)arg2 ;
-(void)didReadFromURL:(id)arg1 bytes:(unsigned long long)arg2 ;
@end

