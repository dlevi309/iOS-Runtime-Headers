/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BKIOHIDServiceMatchObserver, OS_dispatch_queue, BKIOHIDServiceMatcherDataProviding;
@class NSDictionary, NSObject, NSString;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _startedMatching;
	BOOL _invalidated;
	NSDictionary* _matchingDictionary;
	Class _serviceClass;
	id<BKIOHIDServiceMatchObserver> _observer;
	NSObject*<OS_dispatch_queue> _observerQueue;
	id<BKIOHIDServiceMatcherDataProviding> _dataProvider;

}

@property (nonatomic,copy) NSDictionary * matchingDictionary;                                  //@synthesize matchingDictionary=_matchingDictionary - In the implementation block
@property (nonatomic,retain) Class serviceClass;                                               //@synthesize serviceClass=_serviceClass - In the implementation block
@property (assign,nonatomic,__weak) id<BKIOHIDServiceMatchObserver> observer;                  //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> observerQueue;                //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) id<BKIOHIDServiceMatcherDataProviding> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setDataProvider:(id<BKIOHIDServiceMatcherDataProviding>)arg1 ;
-(void)setObserver:(id<BKIOHIDServiceMatchObserver>)arg1 ;
-(id<BKIOHIDServiceMatchObserver>)observer;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(Class)serviceClass;
-(id)existingServices;
-(id)initWithMatchingDictionary:(id)arg1 serviceClass:(Class)arg2 dataProvider:(id)arg3 ;
-(id<BKIOHIDServiceMatcherDataProviding>)dataProvider;
-(NSDictionary *)matchingDictionary;
-(void)_servicesAdded:(id)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 dataProvider:(id)arg2 ;
-(void)_expectDeallocation;
-(id)_servicesForIOHIDServiceRefs:(id)arg1 ;
-(void)_lock_servicesAdded:(id)arg1 ;
-(void)invalidate;
-(void)setMatchingDictionary:(NSDictionary *)arg1 ;
-(void)setServiceClass:(Class)arg1 ;
-(void)startObserving:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)initWithUsagePage:(int)arg1 usage:(int)arg2 builtIn:(BOOL)arg3 dataProvider:(id)arg4 ;
@end

