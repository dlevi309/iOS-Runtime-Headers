/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

