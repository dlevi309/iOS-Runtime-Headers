/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_completed;
-(os_unfair_lock_s)_lock;
-(_DASActivity *)_activity;
-(void)_setActivity:(id)arg1 ;
-(void)_setLock:(os_unfair_lock_s)arg1 ;
-(void)setExpirationHandler:(id)arg1 ;
-(void)_setTaskCompletedWithSuccess:(BOOL)arg1 actionsIfNotAlreadyCompleted:(/*^block*/id)arg2 ;
-(/*^block*/id)_unsafe_setTaskCompletedWithSuccess:(BOOL)arg1 afterDelay:(double)arg2 ;
-(id)expirationHandler;
-(void)setTaskCompletedWithSuccess:(BOOL)arg1 ;
-(id)_initWithIdentifier:(id)arg1 activity:(id)arg2 ;
-(void)_setCompleted:(BOOL)arg1 ;
-(void)_callExpirationHandler;
-(void)_setHandlerQueue:(id)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_handlerQueue;
-(id)_completionHandler;
-(NSString *)identifier;
-(void)dealloc;
@end

