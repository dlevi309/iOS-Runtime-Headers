/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <Foundation/NSOperation.h>

@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {

	NSLock* _lock;
	NSMutableSet* _subOperations;
	BOOL _cancelled;
	BOOL _success;
	AMSOperation* _parentOperation;
	AMSBinaryPromise* _promise;
	NSError* _error;

}

@property (assign,nonatomic,__weak) AMSOperation * parentOperation;              //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) AMSBinaryPromise * promise;                       //@synthesize promise=_promise - In the implementation block
@property (assign,nonatomic) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(id)init;
-(void)run;
-(void)lock;
-(void)unlock;
-(NSError *)error;
-(void)cancel;
-(BOOL)isCancelled;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(AMSBinaryPromise *)promise;
-(void)setSuccess:(BOOL)arg1 ;
-(AMSOperation *)parentOperation;
-(void)setParentOperation:(AMSOperation *)arg1 ;
-(void)runSubOperation:(id)arg1 onQueue:(id)arg2 ;
-(void)runSubOperation:(id)arg1 ;
@end

