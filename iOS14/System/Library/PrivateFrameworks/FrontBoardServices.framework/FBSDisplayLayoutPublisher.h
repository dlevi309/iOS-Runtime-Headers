/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class BSAtomicSignal, BSServiceConnectionListener, NSObject, NSMutableSet, FBSDisplayLayout, NSHashTable, NSMutableOrderedSet, FBSDisplayConfiguration, NSString;

@interface FBSDisplayLayoutPublisher : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable> {

	BSAtomicSignal* _invalidatedSignal;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _queuesByQOS[3];
	NSObject*<OS_xpc_object> _queues_xLayoutByQOS[3];
	NSMutableSet* _queues_connectionsByQOS[3];
	FBSDisplayLayout* _mutableLayout;
	NSMutableSet* _mutableElementKeys;
	NSHashTable* _observers;
	NSObject*<OS_xpc_object> _xLayout;
	FBSDisplayLayout* _currentLayout;
	NSMutableOrderedSet* _transitionReasons;
	unsigned long long _transitionsCount;
	BOOL _dirty;

}

@property (nonatomic,copy) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) long long backlightLevel; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publisherWithConfiguration:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(void)flush;
-(void)setBacklightLevel:(long long)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(id)init;
-(long long)backlightLevel;
-(FBSDisplayLayout *)currentLayout;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)activate;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(long long)interfaceOrientation;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTransitioning;
-(void)invalidate;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
-(id)transitionAssertionWithReason:(id)arg1 ;
@end

