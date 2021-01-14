/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAppBootstrapHandler:(id)arg1 ;
-(void)scheduleNotification;
-(id)init;
-(void)simulateStorefrontChange;
-(void)setHasPendingNotification:(BOOL)arg1 ;
-(void)registerAppBootstrapHandler:(/*^block*/id)arg1 ;
-(void)setDelayCount:(long long)arg1 ;
-(ASKStorefrontChangeProvider *)changeObserver;
-(BOOL)hasPendingNotification;
-(void)notify;
-(void)beginDelayingNotifications;
-(void)endDelayingNotifications;
-(long long)delayCount;
-(id)registerCleanupHandler:(/*^block*/id)arg1 ;
-(id)appBootstrapHandler;
-(NSHashTable *)handlerTokens;
@end

