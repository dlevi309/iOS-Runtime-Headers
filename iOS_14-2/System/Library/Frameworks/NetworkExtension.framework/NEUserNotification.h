/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NEUserNotification : NSObject {

	BOOL _isAlert;
	id _notification;
	id _notificationSource;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign) BOOL isAlert;                                            //@synthesize isAlert=_isAlert - In the implementation block
@property (retain) id notification;                                         //@synthesize notification=_notification - In the implementation block
@property (retain) id notificationSource;                                   //@synthesize notificationSource=_notificationSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                     //@synthesize callback=_callback - In the implementation block
+(void)executeOnMainLoop:(/*^block*/id)arg1 ;
+(Class)getUIDeviceClass;
+(id)createLAContext;
+(void)cancelCurrentNotificationWithDefaultResponse:(BOOL)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)shouldPromptForLocalAuthentication;
+(void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setNotification:(id)arg1 ;
-(id)notification;
-(BOOL)isAlert;
-(void)setIsAlert:(BOOL)arg1 ;
-(BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(id)initAndShowAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3 callbackQueue:(id)arg4 callbackHandler:(/*^block*/id)arg5 ;
-(id)initAndShowLocalNetworkAlertWithAppName:(id)arg1 reasonString:(id)arg2 callbackQueue:(id)arg3 callbackHandler:(/*^block*/id)arg4 ;
-(id)notificationSource;
-(void)setNotificationSource:(id)arg1 ;
-(id)initAndShowAlertWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4 noBoldDefault:(BOOL)arg5 callbackQueue:(id)arg6 callbackHandler:(/*^block*/id)arg7 ;
-(id)initAndShowAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3 callbackQueue:(id)arg4 callbackHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cancel;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

