/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REBlockSentinel : NSObject {

	BOOL _completed;
	/*^block*/id _failureBlock;

}

@property (getter=isCompleted) BOOL completed;               //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)init;
-(void)setCompleted:(BOOL)arg1 ;
-(void)complete;
-(BOOL)isCompleted;
-(id)failureBlock;
-(void)dealloc;
-(id)initWithFailureBlock:(/*^block*/id)arg1 ;
@end

