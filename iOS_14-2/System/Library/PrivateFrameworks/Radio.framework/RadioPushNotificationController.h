/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol RadioPushNotificationControllerDelegate;
@class APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	id<RadioPushNotificationControllerDelegate> _delegate;
	NSString* _environment;
	BOOL _notificationsEnabled;
	BOOL _pushEnabled;

}

@property (assign,nonatomic,__weak) id<RadioPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                                                //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(id<RadioPushNotificationControllerDelegate>)delegate;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)setDelegate:(id<RadioPushNotificationControllerDelegate>)arg1 ;
-(BOOL)notificationsEnabled;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
@end

