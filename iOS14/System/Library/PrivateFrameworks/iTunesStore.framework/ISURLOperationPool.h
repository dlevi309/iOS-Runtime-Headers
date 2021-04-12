/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)operationQueue;
-(id)init;
-(void)cancelOperation:(id)arg1 ;
-(void)dealloc;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
@end

