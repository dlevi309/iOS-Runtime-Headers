/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSNotificationCenter, NSMutableDictionary;

@interface CAMPriorityNotificationCenter : NSObject {

	NSNotificationCenter* __notificationCenter;
	NSMutableDictionary* __observersByNameHighPriority;
	NSMutableDictionary* __observersByNameNormalPriority;

}

@property (nonatomic,retain,readonly) NSNotificationCenter * _notificationCenter;                        //@synthesize _notificationCenter=__notificationCenter - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _observersByNameHighPriority;                //@synthesize _observersByNameHighPriority=__observersByNameHighPriority - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _observersByNameNormalPriority;              //@synthesize _observersByNameNormalPriority=__observersByNameNormalPriority - In the implementation block
+(id)defaultCenter;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(NSNotificationCenter *)_notificationCenter;
-(id)_observersForPriority:(unsigned long long)arg1 ;
-(id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(BOOL)arg3 ;
-(void)_postNotification:(id)arg1 forEntries:(id)arg2 ;
-(NSMutableDictionary *)_observersByNameHighPriority;
-(NSMutableDictionary *)_observersByNameNormalPriority;
-(void)_notificationReceiver:(id)arg1 ;
-(void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5 ;
-(id)_allSubscriptions;
-(void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2 ;
@end

