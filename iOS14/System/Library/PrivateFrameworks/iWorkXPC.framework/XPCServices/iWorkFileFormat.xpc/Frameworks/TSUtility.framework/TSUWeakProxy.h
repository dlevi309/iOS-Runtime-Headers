/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <Foundation/NSProxy.h>

@interface TSUWeakProxy : NSProxy {

	id _target;
	Class _targetClass;

}

@property (assign,nonatomic,__weak) id target;               //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) Class targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
-(void)setTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(Class)targetClass;
-(id)initWithTarget:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(id)target;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

