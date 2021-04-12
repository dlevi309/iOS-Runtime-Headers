/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol POPAnimatorDelegate;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CADisplayLink, NSMutableArray;

@interface POPAnimator : NSObject {

	CADisplayLink* _displayLink;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _list;
	CFDictionaryRef _dict;
	NSMutableArray* _observers;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _pendingList;
	CFRunLoopObserverRef _pendingListObserver;
	double _slowMotionStartTime;
	double _slowMotionLastTime;
	double _slowMotionAccumulator;
	double _beginTime;
	opaque_pthread_mutex_t _lock;
	BOOL _disableDisplayLink;
	id<POPAnimatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL disableDisplayLink;                              //@synthesize disableDisplayLink=_disableDisplayLink - In the implementation block
@property (assign,nonatomic) double beginTime;                                     //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic,__weak) id<POPAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double refreshPeriod; 
+(id)sharedAnimator;
-(void)addObserver:(id)arg1 ;
-(double)beginTime;
-(void)render;
-(id)observers;
-(id)init;
-(id<POPAnimatorDelegate>)delegate;
-(void)setBeginTime:(double)arg1 ;
-(double)refreshPeriod;
-(void)setDelegate:(id<POPAnimatorDelegate>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(double)_currentRenderTime;
-(void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3 ;
-(void)removeAllAnimationsForObject:(id)arg1 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 ;
-(id)animationKeysForObject:(id)arg1 ;
-(id)animationForObject:(id)arg1 key:(id)arg2 ;
-(void)_clearPendingListObserver;
-(void)_renderTime:(double)arg1 items:(list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >*)arg2 ;
-(void)_processPendingList;
-(void)_renderTime:(double)arg1 item:(shared_ptr<POPAnimatorItem>*)arg2 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(BOOL)arg3 ;
-(void)_scheduleProcessPendingList;
-(void)renderTime:(double)arg1 ;
-(BOOL)disableDisplayLink;
-(void)setDisableDisplayLink:(BOOL)arg1 ;
@end

