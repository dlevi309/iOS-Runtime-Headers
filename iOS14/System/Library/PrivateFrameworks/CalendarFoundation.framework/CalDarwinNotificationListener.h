/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalActivatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CalDarwinNotificationListener : NSObject <CalActivatable> {

	BOOL _listening;
	NSString* _notificationName;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL listening;                                            //@synthesize listening=_listening - In the implementation block
@property (nonatomic,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
-(id)callback;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)_addObserver;
-(BOOL)_removeObserver;
-(void)setListening:(BOOL)arg1 ;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)listening;
-(void)deactivate;
-(void)activate;
-(id)description;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 queue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSString *)notificationName;
-(void)_notificationWithNameReceived:(id)arg1 ;
-(void)dealloc;
@end

