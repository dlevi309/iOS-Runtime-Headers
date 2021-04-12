/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoQueueProviding, SVVideoProviderProviding;
@class NSString;

@interface SVVideoAdSkipTracker : NSObject <SVVideoTransitionObserver> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoProviderProviding> _videoProviderProvider;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                         //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoProviderProviding> videoProviderProvider;              //@synthesize videoProviderProvider=_videoProviderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoQueueProviding>)queueProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithQueueProvider:(id)arg1 videoProviderProvider:(id)arg2 ;
-(id<SVVideoProviderProviding>)videoProviderProvider;
@end

