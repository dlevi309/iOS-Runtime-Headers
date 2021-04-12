/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                    //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (assign,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSOperationQueue * underlyingOperationQueue; 
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithQualityOfService:(long long)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)enqueueBlockForMainThread:(/*^block*/id)arg1 ;
-(void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(/*^block*/id)arg2 ;
-(void)cancelAllBlocks;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)underlyingOperationQueue;
@end

