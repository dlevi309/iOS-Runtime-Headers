/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@class NSConditionLock, NSError, NSMutableArray;

@interface CPSPromise : NSObject {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}
+(id)promise;
-(void)finish;
-(id)init;
-(BOOL)_isFinished;
-(void)_flushCompletionBlocks;
-(void)finishWithError:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(void)_finishWithResult:(id)arg1 error:(id)arg2 ;
@end

