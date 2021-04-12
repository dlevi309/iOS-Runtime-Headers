/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoImpressionTrackerFactory, SVVideoEventTrackerProviding, SVVideoImpressionTracking;
@class NSString;

@interface SVVideoImpressionTrackerManager : NSObject <SVVideoTransitionObserver> {

	id<SVVideoImpressionTrackerFactory> _impressionTrackerFactory;
	id<SVVideoEventTrackerProviding> _eventTrackerProvider;
	id<SVVideoImpressionTracking> _impressionTracker;

}

@property (nonatomic,readonly) id<SVVideoImpressionTrackerFactory> impressionTrackerFactory;              //@synthesize impressionTrackerFactory=_impressionTrackerFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;                     //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideoImpressionTracking> impressionTracker;                             //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(id<SVVideoImpressionTrackerFactory>)impressionTrackerFactory;
-(void)setImpressionTracker:(id<SVVideoImpressionTracking>)arg1 ;
-(id<SVVideoImpressionTracking>)impressionTracker;
-(id)initWithImpressionTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2 ;
@end

