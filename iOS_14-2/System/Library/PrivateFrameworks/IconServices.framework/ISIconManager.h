/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)findOrRegisterIcon:(id)arg1 ;
-(void)setIconRegistry:(NSHashTable *)arg1 ;
-(id<ISIconCache>)iconCache;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
-(NSHashTable *)iconRegistry;
-(void)dealloc;
@end

