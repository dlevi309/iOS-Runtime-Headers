/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TACLVisit, TALocationLite, NSMutableDictionary, NSMutableOrderedSet, NSMutableArray, NSDate, TADisplayOnCalculator, NSNumber;

@interface TAVisitSnapshot : NSObject <NSSecureCoding> {

	BOOL _isClosed;
	BOOL _latestLocationInsideVisit;
	TACLVisit* _representativeVisit;
	TALocationLite* _latestLocation;
	unsigned long long _loiType;
	NSMutableDictionary* _latestUtAdvertisements;
	NSMutableDictionary* _earliestUtAdvertisements;
	NSMutableOrderedSet* _lruUtAdvertisementCache;
	unsigned long long _uniqueUTBufferSizeCap;
	unsigned long long _displayEventBufferSizeCap;
	NSMutableArray* _displayEvents;
	NSDate* _exitIntervalBeginning;
	TADisplayOnCalculator* _displayOnCalculator;
	NSNumber* _distanceToClosestLoi;
	NSDate* _entryDurationOfConsiderationClosed;
	unsigned long long _maxNSigmaBetweenLastLocationAndVisit;

}

@property (nonatomic,retain) NSMutableOrderedSet * lruUtAdvertisementCache;                        //@synthesize lruUtAdvertisementCache=_lruUtAdvertisementCache - In the implementation block
@property (assign,nonatomic) unsigned long long uniqueUTBufferSizeCap;                             //@synthesize uniqueUTBufferSizeCap=_uniqueUTBufferSizeCap - In the implementation block
@property (assign,nonatomic) unsigned long long displayEventBufferSizeCap;                         //@synthesize displayEventBufferSizeCap=_displayEventBufferSizeCap - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayEvents;                                       //@synthesize displayEvents=_displayEvents - In the implementation block
@property (nonatomic,retain) NSDate * exitIntervalBeginning;                                       //@synthesize exitIntervalBeginning=_exitIntervalBeginning - In the implementation block
@property (nonatomic,retain) TADisplayOnCalculator * displayOnCalculator;                          //@synthesize displayOnCalculator=_displayOnCalculator - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToClosestLoi;                                      //@synthesize distanceToClosestLoi=_distanceToClosestLoi - In the implementation block
@property (nonatomic,retain) NSDate * entryDurationOfConsiderationClosed;                          //@synthesize entryDurationOfConsiderationClosed=_entryDurationOfConsiderationClosed - In the implementation block
@property (assign,nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit;              //@synthesize maxNSigmaBetweenLastLocationAndVisit=_maxNSigmaBetweenLastLocationAndVisit - In the implementation block
@property (nonatomic,readonly) BOOL isClosed;                                                      //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) TACLVisit * representativeVisit;                                    //@synthesize representativeVisit=_representativeVisit - In the implementation block
@property (nonatomic,copy,readonly) TALocationLite * latestLocation;                               //@synthesize latestLocation=_latestLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long loiType;                                         //@synthesize loiType=_loiType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * latestUtAdvertisements;                       //@synthesize latestUtAdvertisements=_latestUtAdvertisements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * earliestUtAdvertisements;                     //@synthesize earliestUtAdvertisements=_earliestUtAdvertisements - In the implementation block
@property (nonatomic,readonly) BOOL latestLocationInsideVisit;                                     //@synthesize latestLocationInsideVisit=_latestLocationInsideVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)maxNSigmaBetweenLastLocationAndVisit;
-(unsigned long long)loiType;
-(BOOL)isClosed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TALocationLite *)latestLocation;
-(TACLVisit *)representativeVisit;
-(NSMutableDictionary *)latestUtAdvertisements;
-(NSMutableDictionary *)earliestUtAdvertisements;
-(BOOL)latestLocationInsideVisit;
-(double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)arg1 ;
-(id)getEntryIntervalEvaluatedUntil;
-(id)getEntryAdvertisementsWithDisplayOnBudget:(double)arg1 ;
-(id)getExitAdvertisementsWithDisplayOnBudget:(double)arg1 ;
-(id)getArrivalDelay;
-(id)getDepartureDelay;
-(double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)arg1 ;
-(void)addUTAdvertisement:(id)arg1 ;
-(void)updateLatestLocation:(id)arg1 ;
-(void)addSystemState:(id)arg1 ;
-(void)addScanState:(id)arg1 ;
-(id)initWithTACLVisit:(id)arg1 uniqueUTBufferCap:(unsigned long long)arg2 displayEventBufferSizeCap:(unsigned long long)arg3 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg4 ;
-(BOOL)setDepartureVisit:(id)arg1 ;
-(void)updateLoiType:(id)arg1 ;
-(unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)arg1 minDisplayOnDuration:(double)arg2 ;
-(id)getLocationRepresentingSnapshot;
-(void)pruneDisplayEvents;
-(void)setRepresentativeVisit:(TACLVisit *)arg1 ;
-(void)closeSnapshotCleanup;
-(id)mostRecentAdvertisementDate;
-(void)updateEntryIntervalWithDisplayOnBudget:(double)arg1 evaluateToEnd:(BOOL)arg2 ;
-(void)calculateExitIntervalWithDisplayOnBudget:(double)arg1 ;
-(double)getDisplayOnTimeUntilEndDate:(id)arg1 ;
-(NSMutableOrderedSet *)lruUtAdvertisementCache;
-(unsigned long long)uniqueUTBufferSizeCap;
-(unsigned long long)displayEventBufferSizeCap;
-(NSMutableArray *)displayEvents;
-(NSDate *)exitIntervalBeginning;
-(TADisplayOnCalculator *)displayOnCalculator;
-(NSNumber *)distanceToClosestLoi;
-(NSDate *)entryDurationOfConsiderationClosed;
-(void)setLruUtAdvertisementCache:(NSMutableOrderedSet *)arg1 ;
-(void)setUniqueUTBufferSizeCap:(unsigned long long)arg1 ;
-(void)setDisplayEventBufferSizeCap:(unsigned long long)arg1 ;
-(void)setDisplayEvents:(NSMutableArray *)arg1 ;
-(void)setExitIntervalBeginning:(NSDate *)arg1 ;
-(void)setDisplayOnCalculator:(TADisplayOnCalculator *)arg1 ;
-(void)setDistanceToClosestLoi:(NSNumber *)arg1 ;
-(void)setEntryDurationOfConsiderationClosed:(NSDate *)arg1 ;
-(void)setMaxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg1 ;
@end
