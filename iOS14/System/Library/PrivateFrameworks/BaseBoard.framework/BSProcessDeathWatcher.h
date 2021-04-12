/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {

	BSDispatchSource* _source;
	/*^block*/id _deathHandler;

}
-(id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)dealloc;
@end

