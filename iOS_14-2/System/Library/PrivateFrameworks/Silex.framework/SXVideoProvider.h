/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoProviding.h>

@protocol SXAnalyticsReporting, SXVideoMetadata;
@class NSURL, SXTimeline, NSString;

@interface SXVideoProvider : NSObject <SXVideoProviding> {

	NSURL* _URL;
	id<SXAnalyticsReporting> _analyticsReporter;
	id<SXVideoMetadata> _metadata;
	SXTimeline* _timeline;
	double _pausedAtTime;
	NSString* _mediaIdentifier;
	unsigned long long _playMethod;

}

@property (assign,nonatomic,__weak) id<SXVideoMetadata> metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) SXTimeline * timeline;                                 //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic) double pausedAtTime;                                     //@synthesize pausedAtTime=_pausedAtTime - In the implementation block
@property (nonatomic,readonly) NSString * mediaIdentifier;                            //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long playMethod;                           //@synthesize playMethod=_playMethod - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) id<SXAnalyticsReporting> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double impressionThreshold; 
-(id)initWithURL:(id)arg1 ;
-(void)setMetadata:(id<SXVideoMetadata>)arg1 ;
-(unsigned long long)playMethod;
-(void)setPlayMethod:(unsigned long long)arg1 ;
-(void)setAnalyticsReporter:(id<SXAnalyticsReporting>)arg1 ;
-(NSURL *)URL;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(SXTimeline *)timeline;
-(id<SXVideoMetadata>)metadata;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(NSString *)mediaIdentifier;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)muteStateChanged:(BOOL)arg1 ;
-(void)playbackPassedQuartile:(unsigned long long)arg1 ;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(double)pausedAtTime;
-(void)setPausedAtTime:(double)arg1 ;
@end

