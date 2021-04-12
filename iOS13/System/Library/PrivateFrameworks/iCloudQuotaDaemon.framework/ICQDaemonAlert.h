/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <iCloudQuotaDaemon/iCloudQuotaDaemon-Structs.h>
@class NSLock, NSObject, ICQDaemonOffer;

@interface ICQDaemonAlert : NSObject {

	NSLock* _alertLock;
	long long _alertState;
	CFUserNotificationRef _cfAlert;
	NSObject*<OS_dispatch_semaphore> _alertSema;
	NSObject*<OS_dispatch_queue> _alertQueue;
	BOOL _showOnlyInSpringboard;
	BOOL _handleActionsBeforeCallingCompletionHandler;
	ICQDaemonOffer* _daemonOffer;

}

@property (nonatomic,readonly) ICQDaemonOffer * daemonOffer;                                //@synthesize daemonOffer=_daemonOffer - In the implementation block
@property (assign,nonatomic) BOOL showOnlyInSpringboard;                                    //@synthesize showOnlyInSpringboard=_showOnlyInSpringboard - In the implementation block
@property (assign,nonatomic) BOOL handleActionsBeforeCallingCompletionHandler;              //@synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler - In the implementation block
+(BOOL)shouldShowForDaemonOffer:(id)arg1 ;
+(void)dismissAlertsWithNotificationID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)dismissAlert;
-(id)initWithDaemonOffer:(id)arg1 ;
-(BOOL)showAlertWithCompletion:(/*^block*/id)arg1 ;
-(ICQDaemonOffer *)daemonOffer;
-(BOOL)showOnlyInSpringboard;
-(BOOL)handleActionsBeforeCallingCompletionHandler;
-(void)_handleLink:(id)arg1 ;
-(void)setShowOnlyInSpringboard:(BOOL)arg1 ;
-(void)setHandleActionsBeforeCallingCompletionHandler:(BOOL)arg1 ;
@end

