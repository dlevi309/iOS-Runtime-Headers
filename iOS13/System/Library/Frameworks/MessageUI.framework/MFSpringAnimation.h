/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <QuartzCore/CASpringAnimation.h>

@class MFSpringAnimationDelegate;

@interface MFSpringAnimation : CASpringAnimation

@property (nonatomic,retain) MFSpringAnimationDelegate * delegate; 
+(double)defaultAnimationDuration;
+(id)springAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

