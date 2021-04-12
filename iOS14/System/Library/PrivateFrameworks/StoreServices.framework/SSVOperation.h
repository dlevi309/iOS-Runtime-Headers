/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)addChildRequest:(id)arg1 ;
-(void)removeChildRequest:(id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)runChildOperation:(id)arg1 ;
-(void)cancel;
@end

