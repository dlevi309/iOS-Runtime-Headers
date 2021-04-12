/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAdAnalyticsEvent.h>

@interface SXVideoAdAnalyticsEvent : SXAdAnalyticsEvent {

	double _duration;
	double _timePlayed;

}

@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double timePlayed;              //@synthesize timePlayed=_timePlayed - In the implementation block
-(double)timePlayed;
-(double)duration;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 ;
@end

