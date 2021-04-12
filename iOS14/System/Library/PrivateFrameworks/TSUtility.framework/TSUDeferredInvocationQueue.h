/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject {

	NSMutableArray* _invocations;
	id _target;

}
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)performInvocations;
@end

