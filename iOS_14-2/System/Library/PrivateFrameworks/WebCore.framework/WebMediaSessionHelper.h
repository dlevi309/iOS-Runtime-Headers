/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionHelperiOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)applicationWillResignActive:(id)arg1 ;
-(id)initWithCallback:(MediaSessionHelperiOS*)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)clearCallback;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(BOOL)hasWirelessTargetsAvailable;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(void)activeOutputDeviceDidChange:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
@end

