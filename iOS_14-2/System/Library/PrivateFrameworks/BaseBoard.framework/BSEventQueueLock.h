/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(void)relinquish;
-(id)description;
-(NSString *)reason;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
@end

