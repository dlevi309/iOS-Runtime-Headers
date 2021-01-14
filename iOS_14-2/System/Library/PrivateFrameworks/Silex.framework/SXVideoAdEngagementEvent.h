/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXVideoAdAnalyticsEvent.h>

@interface SXVideoAdEngagementEvent : SXVideoAdAnalyticsEvent {

	unsigned long long _engagementType;

}

@property (nonatomic,readonly) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
-(unsigned long long)engagementType;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 engagementType:(unsigned long long)arg8 ;
@end

