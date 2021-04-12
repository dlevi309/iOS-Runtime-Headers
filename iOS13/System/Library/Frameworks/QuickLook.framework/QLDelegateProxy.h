/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <Foundation/NSProxy.h>

@interface QLDelegateProxy : NSProxy {

	id _firstDelegate;
	id _secondDelegate;

}

@property (__weak) id firstDelegate;               //@synthesize firstDelegate=_firstDelegate - In the implementation block
@property (__weak) id secondDelegate;              //@synthesize secondDelegate=_secondDelegate - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setSecondDelegate:(id)arg1 ;
-(void)setFirstDelegate:(id)arg1 ;
-(id)firstDelegate;
-(id)secondDelegate;
@end

