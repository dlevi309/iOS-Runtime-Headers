/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
*/


@protocol OS_dispatch_queue;
#import <BackgroundTasks/BackgroundTasks-Structs.h>
@class NSString, _DASActivity, NSObject;

@interface BGTask : NSObject {

	BOOL __completed;
	os_unfair_lock_s __lock;
	NSString* _identifier;
	/*^block*/id _expirationHandler;
	_DASActivity* __activity;
	NSObject*<OS_dispatch_queue> __handlerQueue;
	/*^block*/id __completionHandler;

}

@property (setter=_setActivity:,nonatomic,retain) _DASActivity * _activity;                                    //@synthesize _activity=__activity - In the implementation block
@property (assign,setter=_setCompleted:,nonatomic) BOOL _completed;                                            //@synthesize _completed=__completed - In the implementation block
@property (assign,setter=_setLock:,nonatomic) os_unfair_lock_s _lock;                                          //@synthesize _lock=__lock - In the implementation block
@property (setter=_setHandlerQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _handlerQueue;              //@synthesize _handlerQueue=__handlerQueue - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (copy,readonly) NSString * identifier;                                                               //@synthesize identifier=_identifier - In the implementation block
@property (copy) id expirationHandler;                                                                         //@synthesize expirationHandler=_expirationHandler - In the implementation block
-(void)dealloc;
-(os_unfair_lock_s)_lock;
-(NSString *)identifier;
-(_DASActivity *)_activity;
-(id)_completionHandler;
-(BOOL)_completed;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_handlerQueue;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(void)setTaskCompletedWithSuccess:(BOOL)arg1 ;
-(void)_setTaskCompletedWithSuccess:(BOOL)arg1 actionsIfNotAlreadyCompleted:(/*^block*/id)arg2 ;
-(/*^block*/id)_unsafe_setTaskCompletedWithSuccess:(BOOL)arg1 afterDelay:(double)arg2 ;
-(id)_initWithIdentifier:(id)arg1 activity:(id)arg2 ;
-(void)_callExpirationHandler;
-(void)_setActivity:(id)arg1 ;
-(void)_setCompleted:(BOOL)arg1 ;
-(void)_setLock:(os_unfair_lock_s)arg1 ;
-(void)_setHandlerQueue:(id)arg1 ;
@end

