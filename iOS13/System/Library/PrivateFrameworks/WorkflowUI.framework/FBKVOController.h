/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class NSMapTable;

@interface FBKVOController : NSObject {

	NSMapTable* _objectInfosMap;
	opaque_pthread_mutex_t _lock;
	id _observer;

}

@property (nonatomic,__weak,readonly) id observer;              //@synthesize observer=_observer - In the implementation block
+(id)controllerWithObserver:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)observer;
-(id)initWithObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 retainObserved:(BOOL)arg2 ;
-(void)_observe:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 ;
-(void)_unobserveAll;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)unobserve:(id)arg1 keyPath:(id)arg2 ;
-(void)unobserve:(id)arg1 ;
-(void)unobserveAll;
@end

