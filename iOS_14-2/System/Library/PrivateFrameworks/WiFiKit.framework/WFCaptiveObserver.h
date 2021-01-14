/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFCaptiveObserver : NSObject {

	BOOL _observing;
	int _startCaptiveNotificationToken;
	int _endCaptiveNotificationToken;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_queue> _captiveNotificationQueue;

}

@property (assign,getter=isObserving,nonatomic) BOOL observing;                                  //@synthesize observing=_observing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> captiveNotificationQueue;              //@synthesize captiveNotificationQueue=_captiveNotificationQueue - In the implementation block
@property (assign,nonatomic) int startCaptiveNotificationToken;                                  //@synthesize startCaptiveNotificationToken=_startCaptiveNotificationToken - In the implementation block
@property (assign,nonatomic) int endCaptiveNotificationToken;                                    //@synthesize endCaptiveNotificationToken=_endCaptiveNotificationToken - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                      //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)init;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(void)dealloc;
-(void)stopObservingEvents;
-(void)startObservingEvents;
-(NSObject*<OS_dispatch_queue>)captiveNotificationQueue;
-(void)setCaptiveNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)startCaptiveNotificationToken;
-(void)setStartCaptiveNotificationToken:(int)arg1 ;
-(int)endCaptiveNotificationToken;
-(void)setEndCaptiveNotificationToken:(int)arg1 ;
@end

