/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSMutableOrderedSet, NSMutableArray, NSDate, TADisplayOnCalculator, NSNumber, TACLVisit, TALocationLite, NSMutableDictionary;

@interface TAPoiSnapshot : NSObject {

	NSMutableOrderedSet* _lruUtAdvertisementCache;
	unsigned long long _uniqueUTBufferSizeCap;
	unsigned long long _displayEventBufferSizeCap;
	NSMutableArray* _displayEvents;
	NSDate* _exitIntervalBeginning;
	TADisplayOnCalculator* _displayOnCalculator;
	NSNumber* _distanceToClosestLoi;
	NSDate* _entryDurationOfConsiderationClosed;
	unsigned long long _maxNSigmaBetweenLastLocationAndVisit;
	BOOL _latestLocationInsideVisit;
	TACLVisit* _poiArrival;
	TACLVisit* _poiDeparture;
	TALocationLite* _latestLocation;
	unsigned long long _loiType;
	NSMutableDictionary* _latestUtAdvertisements;
	NSMutableDictionary* _earliestUtAdvertisements;

}

@property (nonatomic,copy,readonly) TACLVisit * poiArrival;                                 //@synthesize poiArrival=_poiArrival - In the implementation block
@property (nonatomic,copy,readonly) TACLVisit * poiDeparture;                               //@synthesize poiDeparture=_poiDeparture - In the implementation block
@property (nonatomic,copy,readonly) TALocationLite * latestLocation;                        //@synthesize latestLocation=_latestLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long loiType;                                  //@synthesize loiType=_loiType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * latestUtAdvertisements;                //@synthesize latestUtAdvertisements=_latestUtAdvertisements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * earliestUtAdvertisements;              //@synthesize earliestUtAdvertisements=_earliestUtAdvertisements - In the implementation block
@property (nonatomic,readonly) BOOL latestLocationInsideVisit;                              //@synthesize latestLocationInsideVisit=_latestLocationInsideVisit - In the implementation block
-(BOOL)isClosed;
-(unsigned long long)loiType;
-(NSMutableDictionary *)latestUtAdvertisements;
-(TACLVisit *)poiDeparture;
-(id)getArrivalDelay;
-(id)getDepartureDelay;
-(double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)arg1 ;
-(double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)arg1 ;
-(TACLVisit *)poiArrival;
-(NSMutableDictionary *)earliestUtAdvertisements;
-(void)addUTAdvertisement:(id)arg1 ;
-(TALocationLite *)latestLocation;
-(void)updateLatestLocation:(id)arg1 ;
-(void)addSystemState:(id)arg1 ;
-(void)addScanState:(id)arg1 ;
-(id)initWithTACLVisit:(id)arg1 uniqueUTBufferCap:(unsigned long long)arg2 displayEventBufferSizeCap:(unsigned long long)arg3 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg4 ;
-(BOOL)setDeparturePoi:(id)arg1 ;
-(void)updateLoiType:(id)arg1 ;
-(unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)arg1 minDisplayOnDuration:(double)arg2 ;
-(BOOL)latestLocationInsideVisit;
-(id)getEntryIntervalEvaluatedUntil;
-(id)getEntryAdvertisementsWithDisplayOnBudget:(double)arg1 ;
-(id)getExitAdvertisementsWithDisplayOnBudget:(double)arg1 ;
-(void)pruneDisplayEvents;
-(void)closeSnapshotCleanup;
-(id)mostRecentAdvertisementDate;
-(void)updateEntryIntervalWithDisplayOnBudget:(double)arg1 evaluateToEnd:(BOOL)arg2 ;
-(void)calculateExitIntervalWithDisplayOnBudget:(double)arg1 ;
-(double)getDisplayOnTimeUntilEndDate:(id)arg1 ;
-(BOOL)setDeparturePoiByTime:(id)arg1 ;
@end

