/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationDidStopBlock;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)associateLifetimeWithAnimation:(id)arg1 ;
-(void)setAnimationDidStopBlock:(id)arg1 ;
@end

