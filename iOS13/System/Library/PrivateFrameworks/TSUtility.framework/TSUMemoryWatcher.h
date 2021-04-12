/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {

	TSUFlushingManager* _flushingManager;
	BOOL _going;
	BOOL _stop;

}
-(void)dealloc;
-(void)stopObserving;
-(void)beginObserving;
-(id)initWithFlushingManager:(id)arg1 ;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
@end

