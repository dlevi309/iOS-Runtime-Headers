/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SFBlockBasedCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStopBlock;                //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationDelegateWithDidStopBlock:(/*^block*/id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(id)arg1 ;
-(void)associateLifetimeWithAnimation:(id)arg1 ;
@end

