/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)success;
-(void)unlock;
-(void)setSuccess:(BOOL)arg1 ;
-(void)run;
-(id)init;
-(void)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)runSubOperation:(id)arg1 onQueue:(id)arg2 ;
-(void)setParentOperation:(AMSOperation *)arg1 ;
-(void)runSubOperation:(id)arg1 ;
-(AMSOperation *)parentOperation;
-(void)main;
-(AMSBinaryPromise *)promise;
-(void)cancel;
-(BOOL)isCancelled;
@end

