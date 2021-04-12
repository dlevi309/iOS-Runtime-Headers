/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationDidStopBlock;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setAnimationDidStopBlock:(id)arg1 ;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(id)animationDidStartBlock;
-(void)dealloc;
@end

