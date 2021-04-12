/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAdAnalyticsEvent.h>

@interface SXVideoAdAnalyticsEvent : SXAdAnalyticsEvent {

	double _duration;
	double _timePlayed;

}

@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double timePlayed;              //@synthesize timePlayed=_timePlayed - In the implementation block
-(double)duration;
-(double)timePlayed;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 ;
@end

