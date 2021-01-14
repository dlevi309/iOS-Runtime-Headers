/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSObject, NSMutableArray, NSMapTable;

@interface MPCFuture : NSObject {

	BOOL _finalized;
	BOOL _invalid;
	id _result;
	NSError* _error;
	NSString* _debugLabel;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableArray* _successBlocks;
	NSMutableArray* _failureBlocks;
	NSMutableArray* _completionBlocks;
	NSMapTable* _invalidBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * successBlocks;                         //@synthesize successBlocks=_successBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * failureBlocks;                         //@synthesize failureBlocks=_failureBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                      //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,readonly) NSMapTable * invalidBlocks;                             //@synthesize invalidBlocks=_invalidBlocks - In the implementation block
@property (nonatomic,readonly) id result;                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                      //@synthesize finalized=_finalized - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;                          //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,copy) NSString * debugLabel;                                      //@synthesize debugLabel=_debugLabel - In the implementation block
-(id)onInvalid:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSMutableArray *)successBlocks;
-(BOOL)isFinalized;
-(BOOL)isInvalid;
-(NSMutableArray *)completionBlocks;
-(void)_onQueue_finalize;
-(id)onFailure:(/*^block*/id)arg1 ;
-(NSError *)error;
-(NSMutableArray *)failureBlocks;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setDebugLabel:(NSString *)arg1 ;
-(id)description;
-(NSString *)debugLabel;
-(id)onCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)result;
-(void)finishWithError:(id)arg1 ;
-(id)onSuccess:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)finishWithValue:(id)arg1 ;
-(NSMapTable *)invalidBlocks;
-(void)dealloc;
@end

