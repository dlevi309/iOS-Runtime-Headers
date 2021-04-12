/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFScheduler;
@interface EFSchedulerTrampoline : NSObject {

	id<EFScheduler> _scheduler;
	id _object;

}
+(id)trampolineWithScheduler:(id)arg1 object:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithScheduler:(id)arg1 object:(id)arg2 ;
@end

