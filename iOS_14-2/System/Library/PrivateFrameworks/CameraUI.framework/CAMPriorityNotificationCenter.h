/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)_observersByNameNormalPriority;
-(id)_observersForPriority:(unsigned long long)arg1 ;
-(id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(BOOL)arg3 ;
-(id)_allSubscriptions;
-(void)_postNotification:(id)arg1 forEntries:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5 ;
-(NSNotificationCenter *)_notificationCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(NSMutableDictionary *)_observersByNameHighPriority;
-(void)_notificationReceiver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2 ;
-(void)dealloc;
@end

