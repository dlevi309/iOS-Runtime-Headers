/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class NSMutableArray;

@interface SORequestQueue : NSObject {

	NSMutableArray* _queue;
	id _processingItem;
	/*^block*/id _processItemBlock;

}

@property (nonatomic,copy) id processItemBlock;              //@synthesize processItemBlock=_processItemBlock - In the implementation block
+(id)debugDescription;
+(id)requestQueueWithIdentifier:(id)arg1 ;
-(id)init;
-(id)description;
-(void)enqueueRequest:(id)arg1 ;
-(void)_processItem:(id)arg1 ;
-(void)_itemCompleted;
-(void)processNextRequest;
-(void)removeAllRequestsWithBlock:(/*^block*/id)arg1 ;
-(id)processItemBlock;
-(void)setProcessItemBlock:(id)arg1 ;
@end

