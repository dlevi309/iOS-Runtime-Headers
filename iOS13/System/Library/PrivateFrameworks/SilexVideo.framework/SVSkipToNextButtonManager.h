/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVSkipToNextButtonManager.h>

@protocol SVSkipToNextButtonManager <NSObject>
@required
-(void)addControl:(id)arg1;

@end


@protocol SVVideoSkipLockObserverFactory, SVVideoViewControllerProviding, SVVideoQueueProviding, SVVideoQueueObserving, SVVideoSkipLockObserving;
@class NSMutableSet, NSString;

@interface SVSkipToNextButtonManager : NSObject <SVVideoTransitionObserver, SVSkipToNextButtonManager> {

	NSMutableSet* _controls;
	id<SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoQueueObserving> _queueObserver;
	id<SVVideoSkipLockObserving> _skipLockObserver;

}

@property (nonatomic,readonly) NSMutableSet * controls;                                                     //@synthesize controls=_controls - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipLockObserverFactory> skipLockObserverFactory;                  //@synthesize skipLockObserverFactory=_skipLockObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                     //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueObserving> queueObserver;                                     //@synthesize queueObserver=_queueObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoSkipLockObserving> skipLockObserver;                                 //@synthesize skipLockObserver=_skipLockObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)controls;
-(void)conditionsChanged;
-(id<SVVideoSkipLockObserverFactory>)skipLockObserverFactory;
-(void)setSkipLockObserver:(id<SVVideoSkipLockObserving>)arg1 ;
-(id<SVVideoSkipLockObserving>)skipLockObserver;
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)addControl:(id)arg1 ;
-(id<SVVideoQueueObserving>)queueObserver;
-(id)initWithSkipLockObserverFactory:(id)arg1 videoViewControllerProvider:(id)arg2 queueProvider:(id)arg3 queueObserver:(id)arg4 ;
@end

