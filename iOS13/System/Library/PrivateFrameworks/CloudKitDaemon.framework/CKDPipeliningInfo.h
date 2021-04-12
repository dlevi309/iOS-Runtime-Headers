/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDURLRequestPipelining, CKDOperationPipelining, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPipeliningInfo : NSObject {

	BOOL _isCancelled;
	id<CKDURLRequestPipelining> _request;
	id<CKDOperationPipelining> _operation;
	NSObject*<OS_dispatch_group> _perRequestCallbackGroup;
	NSObject*<OS_dispatch_group> _perRequestGroup;
	NSObject*<OS_dispatch_queue> _perRequestCallbackQueue;
	NSMutableArray* _perRequestCallbackBlocks;

}

@property (nonatomic,retain) NSMutableArray * perRequestCallbackBlocks;                         //@synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                                  //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) id<CKDURLRequestPipelining> request;                               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CKDOperationPipelining> operation;                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestCallbackGroup;              //@synthesize perRequestCallbackGroup=_perRequestCallbackGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestGroup;                      //@synthesize perRequestGroup=_perRequestGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> perRequestCallbackQueue;              //@synthesize perRequestCallbackQueue=_perRequestCallbackQueue - In the implementation block
-(id<CKDOperationPipelining>)operation;
-(void)setOperation:(id<CKDOperationPipelining>)arg1 ;
-(BOOL)isCancelled;
-(void)setRequest:(id<CKDURLRequestPipelining>)arg1 ;
-(id<CKDURLRequestPipelining>)request;
-(void)setIsCancelled:(BOOL)arg1 ;
-(id)initWithRequest:(id)arg1 operation:(id)arg2 ;
-(void)addPerRequestCallbackBlock:(/*^block*/id)arg1 ;
-(void)disablePerRequestCallbackBlocks;
-(void)cancelAndDisablePerRequestCallbackBlocks;
-(NSObject*<OS_dispatch_group>)perRequestCallbackGroup;
-(void)setPerRequestCallbackGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)perRequestGroup;
-(void)setPerRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)perRequestCallbackQueue;
-(void)setPerRequestCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)perRequestCallbackBlocks;
-(void)setPerRequestCallbackBlocks:(NSMutableArray *)arg1 ;
@end

