/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@interface CUIKTimeToLeaveDescriptionGenerator : NSObject
+(id)_etaString:(double)arg1 ;
+(id)_travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(id)arg2 eta:(id)arg3 location:(id)arg4 ;
+(id)travelTimeRunningLateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeLeaveNowStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeRunningLateTransitStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeOnTimeTransitStringWithEta:(id)arg1 ;
+(id)_travelTimeWalkingStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeOnTimeWalkingStringWithEta:(id)arg1 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(BOOL)arg3 ;
+(id)_travelTimeOnTimeDrivingStringWithEta:(id)arg1 ;
+(id)departureDateString:(id)arg1 ;
+(id)_travelTimeWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowTransitStringWithLocation:(id)arg1 ;
+(id)_travelTimeLeaveNowTransitStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowWalkingStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(BOOL)arg4 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(BOOL)arg3 ;
+(id)_travelTimeStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(BOOL)arg4 ;
+(id)explanatoryText;
+(id)travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(id)arg2 location:(id)arg3 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg1 location:(id)arg2 ;
+(id)timeToLeaveStringWithEta:(double)arg1 transportType:(int)arg2 runningLate:(BOOL)arg3 ;
+(id)timeToLeaveAttributedStringWithAttributes:(id)arg1 hypothesis:(id)arg2 location:(id)arg3 ;
+(id)_attributedEtaString:(double)arg1 fontName:(id)arg2 fontSize:(double)arg3 ;
@end

