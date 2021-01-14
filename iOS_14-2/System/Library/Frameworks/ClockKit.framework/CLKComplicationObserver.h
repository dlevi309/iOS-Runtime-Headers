/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class NSHashTable;

@interface CLKComplicationObserver : NSObject {

	NSHashTable* _wakeSessionObservers;
	NSHashTable* _observers;

}
+(id)sharedObserver;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)complicationListDidChange;
-(void)addWakeSessionObserver:(id)arg1 ;
-(void)removeWakeSessionObserver:(id)arg1 ;
-(void)wakeSessionWillBeginForBundleID:(id)arg1 ;
-(void)wakeSessionWillEndForBundleID:(id)arg1 ;
-(void)reloadOrExtendForBundleID:(id)arg1 ;
@end

