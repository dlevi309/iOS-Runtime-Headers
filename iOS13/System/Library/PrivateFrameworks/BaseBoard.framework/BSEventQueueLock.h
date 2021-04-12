/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)relinquish;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
@end

