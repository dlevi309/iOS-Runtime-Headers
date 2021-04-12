/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double availabilityFreshnessWindow; 
@property (assign,nonatomic) BOOL overrideTravelAdvisoryHypothesis; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisTransportType; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime; 
@property (assign,nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisCurrentTrafficDensity; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisRouteName; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisTravelState; 
@property (assign,nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed; 
@property (assign,nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses; 
@property (assign,nonatomic) BOOL saveGeocodedLocationsInTravelEngine; 
@property (assign,nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine; 
@property (assign,nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines; 
@property (assign,nonatomic) BOOL showDepartureDateForTransitTimeToLeave; 
@property (assign,nonatomic) BOOL shouldBypassTravelEngineThrottle; 
@property (assign,nonatomic) BOOL syntheticTravelAdvisoriesEnabled; 
+(id)shared;
-(id)init;
-(BOOL)verifyIntegrityOfAvailabilityTimeSearchTimelines;
-(double)availabilityFreshnessWindow;
-(void)setAvailabilityFreshnessWindow:(double)arg1 ;
-(BOOL)saveGeocodedLocationsInTravelEngine;
-(void)setSaveGeocodedLocationsInTravelEngine:(BOOL)arg1 ;
-(BOOL)overrideTravelAdvisoryHypothesis;
-(void)setOverrideTravelAdvisoryHypothesis:(BOOL)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisTransportType;
-(void)setOverriddenTravelAdvisoryHypothesisTransportType:(NSString *)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisConservativeTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisConservativeTravelTime:(double)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisEstimatedTravelTime:(double)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisAggressiveTravelTime:(double)arg1 ;
-(BOOL)overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
-(void)setOverriddenTravelAdvisoryHypothesisSupportsLiveTraffic:(BOOL)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
-(void)setOverriddenTravelAdvisoryHypothesisCurrentTrafficDensity:(NSString *)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisRouteName;
-(void)setOverriddenTravelAdvisoryHypothesisRouteName:(NSString *)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisTravelState;
-(void)setOverriddenTravelAdvisoryHypothesisTravelState:(NSString *)arg1 ;
-(BOOL)preventMarkingTravelAdvisoryEntriesAsDismissed;
-(void)setPreventMarkingTravelAdvisoryEntriesAsDismissed:(BOOL)arg1 ;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(void)setForceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg1 ;
-(BOOL)performAgendaEntryEqualityChecksInTravelEngine;
-(void)setPerformAgendaEntryEqualityChecksInTravelEngine:(BOOL)arg1 ;
-(void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(BOOL)arg1 ;
-(BOOL)showDepartureDateForTransitTimeToLeave;
-(void)setShowDepartureDateForTransitTimeToLeave:(BOOL)arg1 ;
-(BOOL)shouldBypassTravelEngineThrottle;
-(void)setShouldBypassTravelEngineThrottle:(BOOL)arg1 ;
-(BOOL)syntheticTravelAdvisoriesEnabled;
-(void)setSyntheticTravelAdvisoriesEnabled:(BOOL)arg1 ;
@end

