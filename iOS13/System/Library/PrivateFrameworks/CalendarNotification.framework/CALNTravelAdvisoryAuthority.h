/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTravelAdvisoryAuthority <NSObject>
@property (nonatomic,readonly) double minimumAllowableTravelTime; 
@property (nonatomic,readonly) double maximumAllowableTravelTime; 
@required
-(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1;
-(double)maximumAllowableTravelTime;
-(double)minimumAllowableTravelTime;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;

@end

