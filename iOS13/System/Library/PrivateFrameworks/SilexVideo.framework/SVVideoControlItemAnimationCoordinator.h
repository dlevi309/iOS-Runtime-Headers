/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoControlItemAnimating.h>

@protocol AVPlayerViewControllerAnimationCoordinator;
@class NSMutableArray, NSString;

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating> {

	id<AVPlayerViewControllerAnimationCoordinator> _coordinator;
	NSMutableArray* _animationBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) id<AVPlayerViewControllerAnimationCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * animationBlocks;                                        //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                                       //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)animationBlocks;
-(NSMutableArray *)completionBlocks;
-(id<AVPlayerViewControllerAnimationCoordinator>)coordinator;
-(void)animateWithAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAnimationCoordinator:(id)arg1 ;
@end

