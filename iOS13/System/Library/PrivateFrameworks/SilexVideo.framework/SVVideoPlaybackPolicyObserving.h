/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoPlaybackPolicyObserving <NSObject>
@property (setter=onRequestStateChange:,nonatomic,copy) id requestStateChangeBlock; 
@property (setter=onAllowedStateChange:,nonatomic,copy) id allowedStateChangeBlock; 
@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> policy; 
@required
-(id<SVVideoPlaybackPolicy>)policy;
-(id)allowedStateChangeBlock;
-(id)requestStateChangeBlock;
-(void)onRequestStateChange:(/*^block*/id)arg1;
-(void)onAllowedStateChange:(/*^block*/id)arg1;

@end

