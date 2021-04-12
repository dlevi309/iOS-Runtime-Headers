/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoControlsTimingProviding.h>

@protocol SVVideoControlsTimingConfiguration, SVVideoSkipThresholdProviding;
@class SVTimeline, NSString;

@interface SVVideoControlsTimingManager : NSObject <SVVideoControlsTimingProviding> {

	id<SVVideoControlsTimingConfiguration> _timingConfiguration;
	id<SVVideoSkipThresholdProviding> _skipThresholdProvider;
	SVTimeline* _timeline;

}

@property (nonatomic,readonly) id<SVVideoControlsTimingConfiguration> timingConfiguration;              //@synthesize timingConfiguration=_timingConfiguration - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipThresholdProviding> skipThresholdProvider;                 //@synthesize skipThresholdProvider=_skipThresholdProvider - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                                   //@synthesize timeline=_timeline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVTimeline *)timeline;
-(double)autoAppearanceTimeIntervalForVideo:(id)arg1 ;
-(double)autoHideTimeIntervalForVideo:(id)arg1 ;
-(double)nowPlayingVisibilityTimeIntervalForVideo:(id)arg1 ;
-(double)moreFromVisibilityTimeIntervalForVideo:(id)arg1 ;
-(double)upNextAppearanceTimeIntervalForVideo:(id)arg1 ;
-(id)initWithControlTimingConfiguration:(id)arg1 skipThresholdProvider:(id)arg2 timeline:(id)arg3 ;
-(id<SVVideoSkipThresholdProviding>)skipThresholdProvider;
-(id<SVVideoControlsTimingConfiguration>)timingConfiguration;
@end

