/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/AVTPushNotificationsSupport.h>

@protocol AVTPushNotificationsSupport
@property (assign,nonatomic,__weak) id<AVTPushNotificationsSupportDelegate> delegate; 
@required
-(id<AVTPushNotificationsSupportDelegate>)delegate;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;
-(void)setDelegate:(id)arg1;

@end


@protocol AVTPushNotificationsSupportDelegate, OS_dispatch_queue, AVTUILogger;
@class APSConnection, NSObject, AVTCoreEnvironment, AVTPushNotificationsConnectionFactory, NSString;

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport> {

	id<AVTPushNotificationsSupportDelegate> _delegate;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	AVTCoreEnvironment* _environment;
	AVTPushNotificationsConnectionFactory* _connectionFactory;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) APSConnection * pushConnection;                                           //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;                           //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTPushNotificationsConnectionFactory * connectionFactory;              //@synthesize connectionFactory=_connectionFactory - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPushNotificationsSupportDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)topic;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id<AVTPushNotificationsSupportDelegate>)delegate;
-(AVTPushNotificationsConnectionFactory *)connectionFactory;
-(void)getAPSEnvironmentString:(/*^block*/id)arg1 ;
-(void)setupConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;
-(id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2 ;
-(void)setDelegate:(id<AVTPushNotificationsSupportDelegate>)arg1 ;
-(id<AVTUILogger>)logger;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(AVTCoreEnvironment *)environment;
-(APSConnection *)pushConnection;
@end

