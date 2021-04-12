/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class ASKStorefrontChangeProvider, NSHashTable;

@interface ASKRebootstrapCoordinator : NSObject {

	BOOL _hasPendingNotification;
	ASKStorefrontChangeProvider* _changeObserver;
	NSHashTable* _handlerTokens;
	/*^block*/id _appBootstrapHandler;
	long long _delayCount;

}

@property (nonatomic,readonly) ASKStorefrontChangeProvider * changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) NSHashTable * handlerTokens;                               //@synthesize handlerTokens=_handlerTokens - In the implementation block
@property (nonatomic,copy) id appBootstrapHandler;                                        //@synthesize appBootstrapHandler=_appBootstrapHandler - In the implementation block
@property (assign,nonatomic) long long delayCount;                                        //@synthesize delayCount=_delayCount - In the implementation block
@property (assign,nonatomic) BOOL hasPendingNotification;                                 //@synthesize hasPendingNotification=_hasPendingNotification - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(ASKStorefrontChangeProvider *)changeObserver;
-(long long)delayCount;
-(void)notify;
-(id)registerCleanupHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)handlerTokens;
-(void)scheduleNotification;
-(void)setHasPendingNotification:(BOOL)arg1 ;
-(id)appBootstrapHandler;
-(void)setDelayCount:(long long)arg1 ;
-(BOOL)hasPendingNotification;
-(void)setAppBootstrapHandler:(id)arg1 ;
-(void)beginDelayingNotifications;
-(void)endDelayingNotifications;
-(void)simulateStorefrontChange;
-(void)registerAppBootstrapHandler:(/*^block*/id)arg1 ;
@end

