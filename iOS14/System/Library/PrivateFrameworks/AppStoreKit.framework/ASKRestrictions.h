/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore;

@interface ASKRestrictions : NSObject {

	long long _maximumAppContentRating;
	BOOL _isAppInstallationAllowed;
	BOOL _isRunningInStoreDemoMode;
	BOOL _hasManagedAppleID;
	BOOL _isAccountModificationRestricted;
	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) long long maximumAppContentRating; 
@property (nonatomic,readonly) BOOL isAppInstallationAllowed; 
@property (nonatomic,readonly) BOOL isRunningInStoreDemoMode; 
@property (nonatomic,readonly) BOOL hasManagedAppleID; 
@property (nonatomic,readonly) BOOL isAccountModificationRestricted; 
-(BOOL)isAppInstallationAllowed;
-(BOOL)hasManagedAppleID;
-(ACAccountStore *)accountStore;
-(void)updateRestrictionsAndNotifyIfNeeded;
-(BOOL)isAccountModificationRestricted;
-(void)updateRestrictionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)maximumAppContentRating;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithAccountStore:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(BOOL)isRunningInStoreDemoMode;
@end

