/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPUserNotification : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackInvocationQueue;
	/*^block*/id _willShowNotificationHandler;
	id strongSelf;
	BOOL _isShowing;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableArray* _showingCompletionHandlers;
	CFUserNotificationRef _cfUserNotification;

}

@property (nonatomic,readonly) CFUserNotificationRef cfUserNotification;              //@synthesize cfUserNotification=_cfUserNotification - In the implementation block
@property (nonatomic,copy) id willShowNotificationHandler; 
+(id)_userNotificationForCFUserNotification:(CFUserNotificationRef)arg1 ;
+(void)_setUserNotification:(id)arg1 forCFUserNotification:(CFUserNotificationRef)arg2 ;
+(id)_userNotificationConversionAccessQueue;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(id)initWithCFUserNotification:(CFUserNotificationRef)arg1 ;
-(id)willShowNotificationHandler;
-(void)setWillShowNotificationHandler:(id)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelSynchronously:(BOOL)arg1 ;
-(void)_didReceiveResponseWithFlags:(unsigned long long)arg1 ;
-(CFUserNotificationRef)cfUserNotification;
@end

