/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoSkipHandling.h>

@protocol SVVideoQueueProviding, SVVisibilityReporting, SVVideoVisiblePercentageManager, SVVideoViewControllerProviding;
@class NSString;

@interface SVPlaylistSkipHandler : NSObject <SVVideoSkipHandling> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVisibilityReporting> _visiblityReporter;
	id<SVVideoVisiblePercentageManager> _visiblePercentageManager;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                     //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SVVisibilityReporting> visiblityReporter;                          //@synthesize visiblityReporter=_visiblityReporter - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> visiblePercentageManager;                //@synthesize visiblePercentageManager=_visiblePercentageManager - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id<SVVideoVisiblePercentageManager>)visiblePercentageManager;
-(id<SVVisibilityReporting>)visiblityReporter;
-(void)skipToVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 videoViewControllerProvider:(id)arg4 ;
-(long long)contentTransitionTypeForVideo:(id)arg1 ;
@end

