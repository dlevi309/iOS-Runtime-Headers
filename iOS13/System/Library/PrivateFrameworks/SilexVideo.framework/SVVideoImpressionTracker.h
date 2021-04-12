/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoImpressionTracking.h>

@protocol SVVideoDurationObserving;
@class SVTimeline, SVTimeBasedAction, NSMutableArray, NSString;

@interface SVVideoImpressionTracker : NSObject <SVVideoImpressionTracking> {

	BOOL _passedImpressionThreshold;
	/*^block*/id _thresholdImpressionBlock;
	/*^block*/id _quartileImpressionBlock;
	double _impressionThreshold;
	unsigned long long _quartile;
	SVTimeline* _timeline;
	id<SVVideoDurationObserving> _durationObserver;
	SVTimeBasedAction* _impressionAction;
	NSMutableArray* _actions;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                                                                 //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserving> durationObserver;                                                                         //@synthesize durationObserver=_durationObserver - In the implementation block
@property (nonatomic,retain) SVTimeBasedAction * impressionAction;                                                                                    //@synthesize impressionAction=_impressionAction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * actions;                                                                                              //@synthesize actions=_actions - In the implementation block
@property (assign,setter=setHasPassedImpressionThreshold:,getter=hasPassedImpressionThreshold,nonatomic) BOOL passedImpressionThreshold;              //@synthesize passedImpressionThreshold=_passedImpressionThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long quartile;                                                                                             //@synthesize quartile=_quartile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=uponThresholdImpression:,nonatomic,copy) id thresholdImpressionBlock;                                                               //@synthesize thresholdImpressionBlock=_thresholdImpressionBlock - In the implementation block
@property (setter=uponQuartileImpression:,nonatomic,copy) id quartileImpressionBlock;                                                                 //@synthesize quartileImpressionBlock=_quartileImpressionBlock - In the implementation block
@property (nonatomic,readonly) double impressionThreshold;                                                                                            //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
-(void)dealloc;
-(NSMutableArray *)actions;
-(double)impressionThreshold;
-(id<SVVideoDurationObserving>)durationObserver;
-(SVTimeline *)timeline;
-(unsigned long long)quartile;
-(void)uponQuartileImpression:(/*^block*/id)arg1 ;
-(void)uponThresholdImpression:(/*^block*/id)arg1 ;
-(void)configureTimelineForImpressionReportingWithDuration:(double)arg1 ;
-(void)configureTimelineForQuartileReportingWithDuration:(double)arg1 ;
-(SVTimeBasedAction *)impressionAction;
-(BOOL)hasPassedImpressionThreshold;
-(void)setHasPassedImpressionThreshold:(BOOL)arg1 ;
-(void)setImpressionAction:(SVTimeBasedAction *)arg1 ;
-(void)setQuartile:(unsigned long long)arg1 ;
-(id)thresholdImpressionBlock;
-(id)quartileImpressionBlock;
-(id)initWithTimeline:(id)arg1 impressionThreshold:(double)arg2 durationObserver:(id)arg3 ;
@end

