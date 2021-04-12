/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoImpressionTrackerFactory.h>

@protocol SVVideoImpressionTrackerFactory <NSObject>
@required
-(id)createImpressionTrackerForVideo:(id)arg1;

@end


@protocol SVVideoImpressionThresholdProviding, SVVideoDurationObserverFactory;
@class SVTimeline, NSString;

@interface SVVideoImpressionTrackerFactory : NSObject <SVVideoImpressionTrackerFactory> {

	SVTimeline* _timeline;
	id<SVVideoImpressionThresholdProviding> _impressionThresholdProvider;
	id<SVVideoDurationObserverFactory> _durationObserverFactory;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                            //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoImpressionThresholdProviding> impressionThresholdProvider;              //@synthesize impressionThresholdProvider=_impressionThresholdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserverFactory> durationObserverFactory;                       //@synthesize durationObserverFactory=_durationObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoDurationObserverFactory>)durationObserverFactory;
-(SVTimeline *)timeline;
-(id)createImpressionTrackerForVideo:(id)arg1 ;
-(id)initWithTimeline:(id)arg1 impressionThresholdProvider:(id)arg2 durationObserverFactory:(id)arg3 ;
-(id<SVVideoImpressionThresholdProviding>)impressionThresholdProvider;
@end

