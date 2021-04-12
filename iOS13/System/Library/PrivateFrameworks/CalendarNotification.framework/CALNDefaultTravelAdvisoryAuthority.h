/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelAdvisoryAuthority.h>

@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double minimumAllowableTravelTime; 
@property (nonatomic,readonly) double maximumAllowableTravelTime; 
+(id)sharedInstance;
-(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
-(double)maximumAllowableTravelTime;
-(double)minimumAllowableTravelTime;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1 ;
@end

