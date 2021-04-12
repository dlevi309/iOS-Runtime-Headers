/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)dealloc;
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)clearCallback;
-(BOOL)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)interruption:(id)arg1 ;
-(void)carPlayServerDied:(id)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(void)activeAudioRouteDidChange:(id)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
@end

