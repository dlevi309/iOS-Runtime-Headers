/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class NSUUID, NSError, NSString;

@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver> {

	NSUUID* _lastGuidanceSignID;
	NSError* _previousSuppressedRerouteError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSessionDidStop:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg1 ;
-(void)navigationSessionDidArrive:(id)arg1 ;
-(void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(id)_stringForLocationType:(unsigned long long)arg1 ;
@end

