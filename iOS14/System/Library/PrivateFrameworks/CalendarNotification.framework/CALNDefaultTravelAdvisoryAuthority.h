/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelAdvisoryAuthority.h>

@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>

@property (nonatomic,readonly) double minimumAllowableTravelTime; 
@property (nonatomic,readonly) double maximumAllowableTravelTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(double)minimumAllowableTravelTime;
-(double)maximumAllowableTravelTime;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1 ;
-(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
@end

