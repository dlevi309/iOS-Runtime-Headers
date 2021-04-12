/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNArrivalRegionTimerDelegate.h>

@class MNObserverHashTable, GEOComposedRoute, MNLocation, NSMutableArray, NSString;

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate> {

	MNObserverHashTable* _safeDelegate;
	GEOComposedRoute* _route;
	MNLocation* _lastLocation;
	BOOL _useLegacyArrival;
	unsigned long long _arrivalState;
	NSMutableArray* _timeoutRegions;

}

@property (nonatomic,readonly) BOOL isInPreArrivalRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)arrivalRegionTimerDidFire:(id)arg1 ;
-(void)updateForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2 ;
-(id)initWithRoute:(id)arg1 useLegacyArrival:(BOOL)arg2 ;
-(BOOL)isInPreArrivalRegion;
-(void)updateForRoute:(id)arg1 ;
-(BOOL)_checkArrivalForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2 ;
-(BOOL)_isInPreArrivalRegionForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2 ;
-(BOOL)_shouldUseNewArrivalLogic;
-(BOOL)_legacyCheckArrivalForLocation:(id)arg1 ;
-(BOOL)_legacyCheckDrivingArrivalForLocation:(id)arg1 ;
-(BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)arg1 ;
@end

