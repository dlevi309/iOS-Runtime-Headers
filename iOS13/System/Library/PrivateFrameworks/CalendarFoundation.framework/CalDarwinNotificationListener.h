/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL listening;                                          //@synthesize listening=_listening - In the implementation block
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)deactivate;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)listening;
-(BOOL)_removeObserver;
-(BOOL)_addObserver;
-(void)setListening:(BOOL)arg1 ;
-(void)_notificationWithNameReceived:(id)arg1 ;
@end

