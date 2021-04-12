/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REBlockSentinel : NSObject {

	BOOL _completed;
	/*^block*/id _failureBlock;

}

@property (getter=isCompleted) BOOL completed;               //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)complete;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(id)failureBlock;
-(id)initWithFailureBlock:(/*^block*/id)arg1 ;
@end

