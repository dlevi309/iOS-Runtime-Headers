/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject {

	int _accountChangedToken;
	NSMapTable* _notificationHandlers;
	NSOperationQueue* _accountChangeHandlerQueue;

}

@property (assign,nonatomic) int accountChangedToken;                                   //@synthesize accountChangedToken=_accountChangedToken - In the implementation block
@property (nonatomic,retain) NSMapTable * notificationHandlers;                         //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeHandlerQueue;              //@synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue - In the implementation block
+(id)sharedNotifier;
-(id)init;
-(void)dealloc;
-(NSMapTable *)notificationHandlers;
-(void)setNotificationHandlers:(NSMapTable *)arg1 ;
-(void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(NSOperationQueue *)accountChangeHandlerQueue;
-(void)postAccountChangedNotificationToClients;
-(int)accountChangedToken;
-(void)setAccountChangedToken:(int)arg1 ;
-(void)setAccountChangeHandlerQueue:(NSOperationQueue *)arg1 ;
@end

