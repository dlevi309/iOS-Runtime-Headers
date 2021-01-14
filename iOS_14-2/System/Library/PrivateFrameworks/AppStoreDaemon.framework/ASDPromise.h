/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSMutableArray, NSRecursiveLock, ASDPromiseResult;

@interface ASDPromise : NSObject {

	NSMutableArray* _observers;
	long long _state;
	NSRecursiveLock* _stateLock;
	ASDPromiseResult* _result;

}

@property (getter=isResolved,readonly) BOOL resolved; 
@property (readonly) ASDPromiseResult * result;                    //@synthesize result=_result - In the implementation block
+(id)promiseWithValue:(id)arg1 ;
+(id)onScheduler:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)promiseWithError:(id)arg1 ;
-(BOOL)isResolved;
-(id)initWithError:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(id)initOnScheduler:(id)arg1 withExecutor:(/*^block*/id)arg2 ;
-(id)initWithState:(long long)arg1 result:(id)arg2 ;
-(void)_invokeExecutor:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(void)resolveWithValue:(id)arg1 ;
-(void)rejectWithError:(id)arg1 ;
-(void)catchError:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)mapUsingTransformer:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)flatMapUsingTransformer:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)joinWithPromise:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)alwaysPerform:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(void)thenPerform:(/*^block*/id)arg1 orCatchError:(/*^block*/id)arg2 onScheduler:(id)arg3 ;
-(ASDPromiseResult *)result;
@end

