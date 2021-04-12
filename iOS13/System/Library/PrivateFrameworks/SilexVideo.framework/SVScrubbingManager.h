/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVScrubbingPolicyHandling, SVVideoViewControllerProviding;
@class NSString;

@interface SVScrubbingManager : NSObject <SVVideoTransitionObserver> {

	id<SVScrubbingPolicyHandling> _policyHandler;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVScrubbingPolicyHandling> policyHandler;                                 //@synthesize policyHandler=_policyHandler - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithPolicyHandler:(id)arg1 videoViewControllerProvider:(id)arg2 ;
-(id<SVScrubbingPolicyHandling>)policyHandler;
@end

