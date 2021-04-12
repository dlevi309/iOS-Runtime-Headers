/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@class NSHashTable;

@interface CLKComplicationObserver : NSObject {

	NSHashTable* _wakeSessionObservers;
	NSHashTable* _observers;

}
+(id)sharedObserver;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)complicationListDidChange;
-(void)addWakeSessionObserver:(id)arg1 ;
-(void)removeWakeSessionObserver:(id)arg1 ;
-(void)wakeSessionWillBeginForBundleID:(id)arg1 ;
-(void)wakeSessionWillEndForBundleID:(id)arg1 ;
-(void)reloadOrExtendForBundleID:(id)arg1 ;
@end

