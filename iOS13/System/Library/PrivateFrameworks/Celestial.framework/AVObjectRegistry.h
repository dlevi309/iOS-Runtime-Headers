/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSHashTable, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {

	NSHashTable* _registeredObjects;
	NSRecursiveLock* _lock;

}
+(id)defaultObjectRegistry;
-(id)init;
-(void)dealloc;
-(void)registerObject:(id)arg1 ;
-(BOOL)safeRetainObject:(id)arg1 ;
-(void)safeInvokeWithDescription:(id)arg1 ;
-(void)safeInvokeWithDescriptionDelayed:(id)arg1 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4 ;
-(void)registerObjectForSafeRetain:(id)arg1 ;
-(void)unregisterObject:(id)arg1 ;
-(void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
-(void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
@end

