/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface OITSUDeferredInvocationQueue : NSObject {

	NSMutableArray* _invocations;
	id _target;

}
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)performInvocations;
@end

