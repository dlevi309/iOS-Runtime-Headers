/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXVideoAdAnalyticsEvent.h>

@interface SXVideoAdEngagementEvent : SXVideoAdAnalyticsEvent {

	unsigned long long _engagementType;

}

@property (nonatomic,readonly) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 engagementType:(unsigned long long)arg8 ;
-(unsigned long long)engagementType;
@end

