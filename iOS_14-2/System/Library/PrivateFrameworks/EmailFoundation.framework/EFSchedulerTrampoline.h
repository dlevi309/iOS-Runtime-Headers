/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFScheduler;
@interface EFSchedulerTrampoline : NSObject {

	id<EFScheduler> _scheduler;
	id _object;

}
+(id)trampolineWithScheduler:(id)arg1 object:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)_initWithScheduler:(id)arg1 object:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

