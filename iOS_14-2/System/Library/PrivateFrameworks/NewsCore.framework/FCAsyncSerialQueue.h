/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                    //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (assign,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSOperationQueue * underlyingOperationQueue; 
-(void)enqueueOperation:(id)arg1 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(BOOL)suspended;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(NSOperationQueue *)underlyingOperationQueue;
-(void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(/*^block*/id)arg2 ;
-(void)cancelAllBlocks;
-(void)enqueueBlockForMainThread:(/*^block*/id)arg1 ;
-(id)initWithQualityOfService:(long long)arg1 ;
@end

