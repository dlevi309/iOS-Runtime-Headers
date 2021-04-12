/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSHashTable;

@interface ISIconManager : NSObject {

	os_unfair_lock_s _observerLock;
	id _iconCache;
	id _iconRegistry;
	id _observers;
	id _internalQueue;

}

@property (retain) NSHashTable * iconRegistry;                              //@synthesize iconRegistry=_iconRegistry - In the implementation block
@property (retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) id<ISIconCache> iconCache;                             //@synthesize iconCache=_iconCache - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<ISIconCache>)iconCache;
-(id)findOrRegisterIcon:(id)arg1 ;
-(NSHashTable *)iconRegistry;
-(void)setIconRegistry:(NSHashTable *)arg1 ;
@end

