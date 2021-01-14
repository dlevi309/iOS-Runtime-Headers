/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <QuartzCore/CATransition.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface NUTransition : CATransition <CAAnimationDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animation;
-(void)setCompletion:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)completion;
@end

