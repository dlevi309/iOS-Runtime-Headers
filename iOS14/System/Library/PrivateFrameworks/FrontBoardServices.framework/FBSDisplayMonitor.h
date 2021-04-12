/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_sortedSources;
-(void)addObserver:(id)arg1 ;
-(void)_lock_enumerateSourcesWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)init;
-(NSEnumerator *)observersEnumerator;
-(void)_lock_enumerateConnectedWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canPostToBookendObserver;
-(void)setAllowsUnknownDisplays:(BOOL)arg1 ;
-(NSString *)debugDescription;
-(id<FBSDisplayObserving>)bookendObserver;
-(BOOL)allowsUnknownDisplays;
-(NSString *)description;
-(FBSDisplayConfiguration *)mainConfiguration;
-(NSSet *)connectedIdentities;
-(FBSDisplayIdentity *)mainIdentity;
-(void)_postInitialBookendObserverConnections;
-(void)removeObserver:(id)arg1 ;
-(id)initWithInitializationCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)_initWithBookendObserver:(id)arg1 ;
-(id)configurationForIdentity:(id)arg1 ;
-(void)dealloc;
@end

