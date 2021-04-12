/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(BOOL)accountSupportsManatee:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1 ;
-(void)setLastCDPError:(NSError *)arg1 ;
-(long long)_fetchManateeAvailability:(id*)arg1 ;
-(long long)manateeAvailableForLoggedInAccount;
-(NSError *)lastCDPError;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)handleUpdateNotificationWithAvailability:(id)arg1 ;
@end

