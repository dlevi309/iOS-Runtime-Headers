/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface CKDAccountManateeObserver : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	long long _manateeAvailableForLoggedInAccount;
	NSError* _lastCDPError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusQueue;                                                                       //@synthesize statusQueue=_statusQueue - In the implementation block
@property (assign,setter=_lockedSetManateeAvailableForLoggedInAccount:,nonatomic) long long manateeAvailableForLoggedInAccount;              //@synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount - In the implementation block
@property (nonatomic,copy) NSError * lastCDPError;                                                                                           //@synthesize lastCDPError=_lastCDPError - In the implementation block
+(id)sharedObserver;
-(id)init;
-(void)handleUpdateNotificationWithAvailability:(id)arg1 ;
-(long long)_fetchManateeAvailability:(id*)arg1 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(NSError *)lastCDPError;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)accountSupportsManatee:(id)arg1 ;
-(long long)manateeAvailableForLoggedInAccount;
-(void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(void)setLastCDPError:(NSError *)arg1 ;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1 ;
-(void)dealloc;
@end

