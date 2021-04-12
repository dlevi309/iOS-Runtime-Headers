/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {

	BSDispatchSource* _source;
	/*^block*/id _deathHandler;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
@end

