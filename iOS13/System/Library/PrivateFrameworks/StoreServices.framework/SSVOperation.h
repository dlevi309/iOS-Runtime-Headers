/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSOperation, NSMutableArray, NSObject, NSError;

@interface SSVOperation : NSOperation {

	NSOperation* _childOperation;
	NSMutableArray* _childRequests;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _success;
	NSError* _error;

}

@property (assign,nonatomic) BOOL success;               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)runChildOperation:(id)arg1 ;
-(void)addChildRequest:(id)arg1 ;
-(void)removeChildRequest:(id)arg1 ;
@end

