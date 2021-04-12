/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setSecondDelegate:(id)arg1 ;
-(void)setFirstDelegate:(id)arg1 ;
-(id)firstDelegate;
-(id)secondDelegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

