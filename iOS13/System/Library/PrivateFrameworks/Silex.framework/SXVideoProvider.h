/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoProviding.h>

@protocol SXAnalyticsReporting, SVVideoMetadata;
@class NSURL, SVTimeline, NSString;

@interface SXVideoProvider : NSObject <SXVideoProviding> {

	NSURL* _URL;
	id<SXAnalyticsReporting> _analyticsReporter;
	id<SVVideoMetadata> _metadata;
	SVTimeline* _timeline;
	double _pausedAtTime;
	NSString* _mediaIdentifier;
	unsigned long long _playMethod;

}

@property (assign,nonatomic,__weak) id<SVVideoMetadata> metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                 //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic) double pausedAtTime;                                     //@synthesize pausedAtTime=_pausedAtTime - In the implementation block
@property (nonatomic,readonly) NSString * mediaIdentifier;                            //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long playMethod;                           //@synthesize playMethod=_playMethod - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) id<SXAnalyticsReporting> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setMetadata:(id<SVVideoMetadata>)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(void)setAnalyticsReporter:(id<SXAnalyticsReporting>)arg1 ;
-(NSString *)mediaIdentifier;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)muteStateChanged:(BOOL)arg1 ;
-(SVTimeline *)timeline;
-(void)setPlayMethod:(unsigned long long)arg1 ;
-(unsigned long long)playMethod;
-(void)configureTimelineForQuartileReporting;
-(void)playbackPausedAtTime:(double)arg1 ;
-(void)playbackResumedAtTime:(double)arg1 ;
-(BOOL)supportsQuartileReporting;
-(void)setPausedAtTime:(double)arg1 ;
-(double)pausedAtTime;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(void)timeElapsed:(double)arg1 duration:(double)arg2 ;
@end

