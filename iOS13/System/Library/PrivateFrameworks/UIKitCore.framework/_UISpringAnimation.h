/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <QuartzCore/CASpringAnimation.h>

@class _UISpringAnimationDelegate;

@interface _UISpringAnimation : CASpringAnimation

@property (nonatomic,retain) _UISpringAnimationDelegate * delegate; 
+(double)defaultAnimationDuration;
+(double)defaultStiffness;
+(double)defaultDamping;
+(void)setDefaultDamping:(double)arg1 ;
+(void)setDefaultStiffness:(double)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

