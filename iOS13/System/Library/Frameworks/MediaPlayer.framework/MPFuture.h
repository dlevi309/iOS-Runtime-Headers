/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface MPFuture : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finalized;
	id _result;
	id _error;
	NSObject*<OS_dispatch_queue> _lazyBlockQueue;
	/*^block*/id _lazySyncBlock;
	/*^block*/id _lazyAsyncBlock;
	NSMapTable* _successBlocks;
	NSMapTable* _failureBlocks;
	NSMapTable* _completionBlocks;
	BOOL _finished;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
+(id)calloutQueue;
+(id)futureWithName:(id)arg1 result:(id)arg2 ;
+(id)futureWithName:(id)arg1 error:(id)arg2 ;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isFinished;
-(id)result:(id*)arg1 ;
-(id)onSuccess:(/*^block*/id)arg1 ;
-(id)onSuccess:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onFailure:(/*^block*/id)arg1 ;
-(id)onFailure:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onCompletion:(/*^block*/id)arg1 ;
-(id)onCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_loadResultIfNeeded;
-(void)_onQueue_finalizeWithResult:(id)arg1 error:(id)arg2 ;
@end

