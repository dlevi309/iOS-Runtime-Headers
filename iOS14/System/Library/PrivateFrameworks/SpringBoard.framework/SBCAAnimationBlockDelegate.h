/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _animationDidStartHandler;
	/*^block*/id _animationDidStopHandler;

}

@property (nonatomic,copy) id animationDidStartHandler;              //@synthesize animationDidStartHandler=_animationDidStartHandler - In the implementation block
@property (nonatomic,copy) id animationDidStopHandler;               //@synthesize animationDidStopHandler=_animationDidStopHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)animationDidStartHandler;
-(void)setAnimationDidStartHandler:(id)arg1 ;
-(id)animationDidStopHandler;
-(void)setAnimationDidStopHandler:(id)arg1 ;
@end

