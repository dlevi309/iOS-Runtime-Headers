/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOverriddenTravelAdvisoryHypothesisEstimatedTravelTime:(double)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisTravelState;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(double)overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
-(void)setOverrideTravelAdvisoryHypothesis:(BOOL)arg1 ;
-(id)init;
-(BOOL)saveGeocodedLocationsInTravelEngine;
-(void)setOverriddenTravelAdvisoryHypothesisCurrentTrafficDensity:(NSString *)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisConservativeTravelTime;
-(double)overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
-(BOOL)overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
-(NSString *)overriddenTravelAdvisoryHypothesisTransportType;
-(void)setShowDepartureDateForTransitTimeToLeave:(BOOL)arg1 ;
-(BOOL)showDepartureDateForTransitTimeToLeave;
-(void)setOverriddenTravelAdvisoryHypothesisConservativeTravelTime:(double)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisRouteName;
-(void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(BOOL)arg1 ;
-(BOOL)preventMarkingTravelAdvisoryEntriesAsDismissed;
-(void)setAvailabilityFreshnessWindow:(double)arg1 ;
-(void)setOverriddenTravelAdvisoryHypothesisAggressiveTravelTime:(double)arg1 ;
-(void)setOverriddenTravelAdvisoryHypothesisTravelState:(NSString *)arg1 ;
-(BOOL)overrideTravelAdvisoryHypothesis;
-(BOOL)shouldBypassTravelEngineThrottle;
-(void)setOverriddenTravelAdvisoryHypothesisSupportsLiveTraffic:(BOOL)arg1 ;
-(void)setOverriddenTravelAdvisoryHypothesisTransportType:(NSString *)arg1 ;
-(double)availabilityFreshnessWindow;
-(void)setPerformAgendaEntryEqualityChecksInTravelEngine:(BOOL)arg1 ;
-(BOOL)syntheticTravelAdvisoriesEnabled;
-(BOOL)performAgendaEntryEqualityChecksInTravelEngine;
-(void)setSaveGeocodedLocationsInTravelEngine:(BOOL)arg1 ;
-(void)setForceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg1 ;
-(void)setSyntheticTravelAdvisoriesEnabled:(BOOL)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
-(void)setShouldBypassTravelEngineThrottle:(BOOL)arg1 ;
-(BOOL)verifyIntegrityOfAvailabilityTimeSearchTimelines;
-(void)setPreventMarkingTravelAdvisoryEntriesAsDismissed:(BOOL)arg1 ;
-(void)setOverriddenTravelAdvisoryHypothesisRouteName:(NSString *)arg1 ;
@end

