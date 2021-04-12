/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@protocol _CDAsyncLocalContext <_CDLocalContext,_CDAsyncContext>
@required
-(void)setObject:(id)arg1 forContextualKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5;

@end

