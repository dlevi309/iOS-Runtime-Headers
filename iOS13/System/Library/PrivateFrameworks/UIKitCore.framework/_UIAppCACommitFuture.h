/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIAppCACommitFuture : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	BOOL _finished;

}

@property (getter=_isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=_isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
+(id)scheduledPostCommitFuture:(/*^block*/id)arg1 ;
+(id)scheduledPreCommitFuture:(/*^block*/id)arg1 ;
-(void)invalidate;
-(BOOL)_isFinished;
-(BOOL)_isInvalidated;
-(id)initWithPhase:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_invoke;
@end

