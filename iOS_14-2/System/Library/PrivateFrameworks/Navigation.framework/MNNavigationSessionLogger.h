/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class NSUUID, NSError, NSMutableDictionary, NSString;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {

	NSUUID* _lastGuidanceSignID;
	NSError* _previousSuppressedRerouteError;
	NSMutableDictionary* _displayETALookup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationSessionDidStop:(id)arg1 ;
-(void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg1 ;
-(void)navigationSessionDidArrive:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2 ;
-(void)navigationSessionDidCancelReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2 ;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)startLoggingWithRouteInfo:(id)arg1 navigationType:(int)arg2 isReconnecting:(BOOL)arg3 ;
-(id)_stringForLocationType:(unsigned long long)arg1 ;
@end

