/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class NSString, NSMutableArray;

@interface SORequestQueue : NSObject {

	NSString* _identifier;
	NSMutableArray* _queue;
	id _processingItem;
	/*^block*/id _processItemBlock;

}

@property (nonatomic,copy) id processItemBlock;              //@synthesize processItemBlock=_processItemBlock - In the implementation block
+(id)debugDescription;
+(id)requestQueueWithIdentifier:(id)arg1 ;
-(id)description;
-(void)enqueueRequest:(id)arg1 ;
-(void)_processItem:(id)arg1 ;
-(void)_itemCompleted;
-(void)processNextRequest;
-(void)removeAllRequestsWithBlock:(/*^block*/id)arg1 ;
-(id)processItemBlock;
-(void)setProcessItemBlock:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

