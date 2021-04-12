/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/MNArrivalUpdaterDelegate.h>

@class GEORouteMatcher, MNArrivalUpdater, NSString;

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {

	GEORouteMatcher* _routeMatcher;
	MNArrivalUpdater* _arrivalUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(void)stopTracking;
-(void)updateLocation:(id)arg1 ;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)arrivalUpdaterDidArrive:(id)arg1 ;
@end

