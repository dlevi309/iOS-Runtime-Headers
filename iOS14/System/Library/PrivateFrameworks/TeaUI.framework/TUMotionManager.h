/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@interface TUMotionManager : NSObject {

	 observers;
	 operationQueue;
	 coreMotionManager;

}
+(id)shared;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)scenDidEnterBackground;
-(void)removeObserver:(id)arg1 ;
-(void)handleReduceMotionChanged;
-(void)sceneDidBecomeActive;
@end

