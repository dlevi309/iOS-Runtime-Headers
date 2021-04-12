/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPIPAnalyticsAssistant.h>

@interface SBPIPAnalyticsSourceSummaryAssistant : SBPIPAnalyticsAssistant {

	BOOL _PIPBecameActive;
	double _possibleDuration;
	double _possibleTimestamp;

}
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(BOOL)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(void)notePIPBecameProhibitedAtTime:(double)arg1 ;
-(void)notePIPBecamePossibleAtTime:(double)arg1 ;
-(void)noteBecameActiveAtTime:(double)arg1 ;
-(id)analyticsIdentifier;
-(id)_generateMutableAnalyticsPayload;
@end

