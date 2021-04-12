/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <QuartzCore/CABasicAnimation.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface NUBasicAnimation : CABasicAnimation <CAAnimationDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationWithKeyPath:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

