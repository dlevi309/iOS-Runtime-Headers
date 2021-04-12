/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVPlayerViewControllerAnimationCoordinator.h>

@protocol AVPlayerViewControllerAnimationCoordinator <NSObject>
@required
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@end


@class NSMutableArray, NSString;

@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator> {

	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,readonly) NSMutableArray * animations;               //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completions;              //@synthesize completions=_completions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)animations;
-(NSMutableArray *)completions;
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performCoordinatedAnimations;
-(void)didFinishAnimations:(BOOL)arg1 ;
@end

