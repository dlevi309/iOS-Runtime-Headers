/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)animations;
-(id)init;
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performCoordinatedAnimations;
-(void)didFinishAnimations:(BOOL)arg1 ;
-(NSMutableArray *)completions;
@end

