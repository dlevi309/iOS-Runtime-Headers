/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CoreSpotlightPreferences : NSObject {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	/*^block*/id _notifyHandler;
	/*^block*/id _notify_handler;
	NSString* _state_key;
	const char* _notification_key;

}

@property (nonatomic,copy,readonly) id notify_handler;                              //@synthesize notify_handler=_notify_handler - In the implementation block
@property (nonatomic,retain) NSString * state_key;                                  //@synthesize state_key=_state_key - In the implementation block
@property (assign,nonatomic) const char* notification_key;                          //@synthesize notification_key=_notification_key - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,copy) id notifyHandler;                                        //@synthesize notifyHandler=_notifyHandler - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                     //@synthesize notifyToken=_notifyToken - In the implementation block
-(void)dealloc;
-(int)notifyToken;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)notifyHandler;
-(void)handlePreferencesChanged;
-(BOOL)notifyStart;
-(void)saveState:(id)arg1 ;
-(void)setNotifyHandler:(id)arg1 ;
-(id)notify_handler;
-(NSString *)state_key;
-(void)setState_key:(NSString *)arg1 ;
-(const char*)notification_key;
-(void)setNotification_key:(const char*)arg1 ;
@end

