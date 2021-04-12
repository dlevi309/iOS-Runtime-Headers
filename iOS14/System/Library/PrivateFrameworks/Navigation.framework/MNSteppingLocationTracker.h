/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopTracking;
-(int)transportType;
-(void)updateLocation:(id)arg1 ;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)arrivalUpdaterDidArrive:(id)arg1 atEndOfLegAtIndex:(unsigned long long)arg2 ;
@end

