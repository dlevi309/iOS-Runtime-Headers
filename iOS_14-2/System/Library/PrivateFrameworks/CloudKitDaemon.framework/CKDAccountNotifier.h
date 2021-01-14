/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMapTable *)notificationHandlers;
-(void)setAccountChangedToken:(int)arg1 ;
-(id)init;
-(void)setAccountChangeHandlerQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)accountChangeHandlerQueue;
-(void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2 ;
-(void)setNotificationHandlers:(NSMapTable *)arg1 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(int)accountChangedToken;
-(void)postAccountChangedNotificationToClients;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

