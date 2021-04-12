/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/AVTPushNotificationsSupport.h>

@protocol AVTPushNotificationsSupport
@property (assign,nonatomic,__weak) id<AVTPushNotificationsSupportDelegate> delegate; 
@required
-(id<AVTPushNotificationsSupportDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;

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
-(id<AVTPushNotificationsSupportDelegate>)delegate;
-(void)setDelegate:(id<AVTPushNotificationsSupportDelegate>)arg1 ;
-(AVTCoreEnvironment *)environment;
-(id<AVTUILogger>)logger;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(AVTPushNotificationsConnectionFactory *)connectionFactory;
-(void)getAPSEnvironmentString:(/*^block*/id)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(void)setupConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;
-(id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2 ;
@end

