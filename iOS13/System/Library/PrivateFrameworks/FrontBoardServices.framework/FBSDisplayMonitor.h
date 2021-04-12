/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, FBSDisplayObserving;
@class NSObject, CADisplay, FBSDisplaySource, NSHashTable, NSMapTable, NSEnumerator, FBSDisplayIdentity, FBSDisplayConfiguration, NSSet, NSString;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	CADisplay* _mainDisplay;
	FBSDisplaySource* _mainDisplaySource;
	os_unfair_lock_s _lock;
	id<FBSDisplayObserving> _lock_bookendObserver;
	NSHashTable* _lock_observers;
	NSMapTable* _lock_sourcesByDisplay;
	BOOL _lock_allowsUnknownDisplays;
	BOOL _lock_canPostToBookendObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callOutQueue;                     //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,readonly) BOOL canPostToBookendObserver; 
@property (nonatomic,__weak,readonly) id<FBSDisplayObserving> bookendObserver; 
@property (nonatomic,copy,readonly) NSEnumerator * observersEnumerator; 
@property (nonatomic,copy,readonly) FBSDisplayIdentity * mainIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainConfiguration; 
@property (nonatomic,copy,readonly) NSSet * connectedIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBSDisplayIdentity *)mainIdentity;
-(FBSDisplayConfiguration *)mainConfiguration;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)_initWithBookendObserver:(id)arg1 ;
-(void)_lock_enumerateConnectedWithBlock:(/*^block*/id)arg1 ;
-(void)_lock_enumerateSourcesWithBlock:(/*^block*/id)arg1 ;
-(id)_sortedSources;
-(id)initWithInitializationCompletion:(/*^block*/id)arg1 ;
-(NSSet *)connectedIdentities;
-(id)configurationForIdentity:(id)arg1 ;
-(BOOL)allowsUnknownDisplays;
-(void)setAllowsUnknownDisplays:(BOOL)arg1 ;
-(void)_postInitialBookendObserverConnections;
-(BOOL)canPostToBookendObserver;
-(id<FBSDisplayObserving>)bookendObserver;
-(NSEnumerator *)observersEnumerator;
@end

