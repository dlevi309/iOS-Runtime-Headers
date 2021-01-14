/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNArrivalRegionTimerDelegate.h>

@class MNObserverHashTable, GEOComposedRoute, MNLocation, NSDate, NSMutableArray, NSString;

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate> {

	MNObserverHashTable* _safeDelegate;
	GEOComposedRoute* _route;
	MNLocation* _lastLocation;
	BOOL _useLegacyArrival;
	unsigned long long _arrivalState;
	unsigned long long _arrivalLegIndex;
	NSDate* _arrivalDate;
	double _closestDistanceToWaypoint;
	NSMutableArray* _timeoutRegions;

}

@property (nonatomic,readonly) BOOL isInPreArrivalRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateForRoute:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)arrivalRegionTimerDidFire:(id)arg1 ;
-(id)initWithRoute:(id)arg1 useLegacyArrival:(BOOL)arg2 ;
-(BOOL)isInPreArrivalRegion;
-(BOOL)allowDepartureForLocation:(id)arg1 ;
-(void)updateForDepartureFromWaypoint;
-(BOOL)_shouldUseNewArrivalLogic;
-(BOOL)_legacyCheckArrivalForLocation:(id)arg1 ;
-(BOOL)_checkArrival:(id)arg1 forLocation:(id)arg2 ;
-(BOOL)_checkPreArrival:(id)arg1 forLocation:(id)arg2 ;
-(double)_distanceToEndOfLeg:(id)arg1 fromLocation:(id)arg2 ;
-(BOOL)_legacyCheckDrivingArrivalForLocation:(id)arg1 ;
-(BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)arg1 ;
@end

