/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSString, AMSObservable, NSObject;

@interface AMSAccountsChangedObservable : NSObject {

	ACAccount* _account;
	NSString* _accountTypeIdentifier;
	AMSObservable* _observable;
	NSObject*<OS_dispatch_queue> _notificationsQueue;

}

@property (nonatomic,retain) AMSObservable * observable;                                   //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationsQueue;              //@synthesize notificationsQueue=_notificationsQueue - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeIdentifier;                           //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
+(id)sharedInstance;
+(id)createdObservables;
+(id)createdObservablesAccessQueue;
+(void)_processChangedAccount:(id)arg1 ;
+(id)sharedLocalAccountInstance;
-(AMSObservable *)observable;
-(ACAccount *)account;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)setObservable:(AMSObservable *)arg1 ;
-(id)_initWithAccount:(id)arg1 accountTypeIdentifier:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationsQueue;
-(void)_processChangedAccount:(id)arg1 ;
-(NSString *)accountTypeIdentifier;
-(BOOL)_shouldNotifyObserversForChangedAccount:(id)arg1 ;
-(id)initWithAccountTypeIdentifier:(id)arg1 ;
-(void)setNotificationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)dealloc;
@end

