/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(ISOperationQueue *)operationQueue;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
@end

