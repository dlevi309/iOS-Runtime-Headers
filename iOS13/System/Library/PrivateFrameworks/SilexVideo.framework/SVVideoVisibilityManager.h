/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoVisibilityManager.h>

@protocol SVVideoVisibilityManager <SVVisibilityReporting>
@required
-(void)startMonitoringVideo:(id)arg1;
-(void)stopMonitoringVideo:(id)arg1;

@end


@protocol SVVideoVisibilityMonitorProviding, SVVideoTransitionManager, SVVideoQueueObserving, SVVideoVisiblePercentageManager;
@class NSMutableDictionary, NSString;

@interface SVVideoVisibilityManager : NSObject <SVVideoVisibilityManager> {

	id<SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;
	id<SVVideoTransitionManager> _transitionManager;
	id<SVVideoQueueObserving> _queueObserver;
	id<SVVideoVisiblePercentageManager> _visiblePercentageManager;
	NSMutableDictionary* _visibilityMonitors;

}

@property (nonatomic,readonly) id<SVVideoVisibilityMonitorProviding> visibilityMonitorProvider;              //@synthesize visibilityMonitorProvider=_visibilityMonitorProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoTransitionManager> transitionManager;                               //@synthesize transitionManager=_transitionManager - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueObserving> queueObserver;                                      //@synthesize queueObserver=_queueObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> visiblePercentageManager;                 //@synthesize visiblePercentageManager=_visiblePercentageManager - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * visibilityMonitors;                                     //@synthesize visibilityMonitors=_visibilityMonitors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)lock;
-(void)unlock;
-(void)updateVisibility;
-(id<SVVideoQueueObserving>)queueObserver;
-(id<SVVideoVisiblePercentageManager>)visiblePercentageManager;
-(void)startMonitoringVideo:(id)arg1 ;
-(void)stopMonitoringVideo:(id)arg1 ;
-(id)initWithTransitionManager:(id)arg1 queueObserver:(id)arg2 visibilityMonitorProvider:(id)arg3 visiblePercentageManager:(id)arg4 ;
-(NSMutableDictionary *)visibilityMonitors;
-(id<SVVideoVisibilityMonitorProviding>)visibilityMonitorProvider;
-(id<SVVideoTransitionManager>)transitionManager;
@end

