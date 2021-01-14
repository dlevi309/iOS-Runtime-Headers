/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalDeviceLockObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, CalDarwinNotificationListener, NSString;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable> {

	BOOL _internalHasBeenUnlockedSinceBoot;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CalDarwinNotificationListener* _notificationListener;
	/*^block*/id _stateChangedCallback;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                             //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (assign,nonatomic) BOOL internalHasBeenUnlockedSinceBoot;                             //@synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasBeenUnlockedSinceBoot;
+(id)stateChangedNotificationName;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(BOOL)internalHasBeenUnlockedSinceBoot;
-(BOOL)hasBeenUnlockedSinceBoot;
-(CalDarwinNotificationListener *)notificationListener;
-(void)_notificationReceived;
-(void)setStateChangedCallback:(id)arg1 ;
-(void)setNotificationListener:(CalDarwinNotificationListener *)arg1 ;
-(id)initWithStateChangedCallback:(/*^block*/id)arg1 ;
-(id)stateChangedCallback;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setInternalHasBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

