/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTravelAdvisoryAuthority <NSObject>
@property (nonatomic,readonly) double minimumAllowableTravelTime; 
@property (nonatomic,readonly) double maximumAllowableTravelTime; 
@required
-(double)minimumAllowableTravelTime;
-(double)maximumAllowableTravelTime;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;
-(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

