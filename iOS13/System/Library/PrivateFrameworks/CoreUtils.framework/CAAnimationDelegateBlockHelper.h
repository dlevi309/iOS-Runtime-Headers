/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate> {

	/*^block*/id _animationDidStartBlock;
	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;               //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;                //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(id)arg1 ;
@end

