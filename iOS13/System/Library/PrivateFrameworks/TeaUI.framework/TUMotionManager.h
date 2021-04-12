/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TUMotionManager : NSObject {

	 observers;
	 operationQueue;
	 coreMotionManager;

}
+(id)shared;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationDidEnterBackground;
-(void)handleReduceMotionChanged;
@end

