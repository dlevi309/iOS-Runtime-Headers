/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>

@class NSOperation, NSString, HAP2Lock, NSOperationQueue;

@interface HAP2SerializedOperationQueue : HAP2LoggingObject {

	NSOperation* _lastOperation;
	NSString* _name;
	HAP2Lock* _lock;
	NSOperationQueue* _queue;

}

@property (nonatomic,readonly) HAP2Lock * lock;                               //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * lastOperation;              //@synthesize lastOperation=_lastOperation - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)commonOperationQueue;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)addConcurrentBlock:(/*^block*/id)arg1 ;
-(void)addConcurrentOperation:(id)arg1 ;
-(void)addBlock:(/*^block*/id)arg1 ;
-(HAP2Lock *)lock;
-(NSOperation *)lastOperation;
-(id)initWithName:(id)arg1 operationQueue:(id)arg2 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)_swapLastOperation:(id)arg1 ;
-(void)setLastOperation:(NSOperation *)arg1 ;
-(void)assertCurrentQueue;
-(NSOperationQueue *)queue;
@end

