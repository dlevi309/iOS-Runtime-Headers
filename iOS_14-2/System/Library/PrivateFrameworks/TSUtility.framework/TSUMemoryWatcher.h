/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {

	TSUFlushingManager* _flushingManager;
	BOOL _going;
	BOOL _stop;

}
-(void)stopObserving;
-(void)beginObserving;
-(void)dealloc;
-(id)initWithFlushingManager:(id)arg1 ;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
@end

