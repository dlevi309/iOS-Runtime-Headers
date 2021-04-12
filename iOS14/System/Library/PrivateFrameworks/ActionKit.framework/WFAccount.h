/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface WFAccount : MTLModel <NSSecureCoding> {

	NSString* _accountID;
	NSDate* _createdAt;
	NSDate* _updatedAt;

}

@property (nonatomic,copy,readonly) NSString * accountID;                  //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdAt;                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSDate * updatedAt;                    //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)accounts;
+(BOOL)supportsSecureCoding;
+(id)serviceID;
+(id)_accounts;
+(unsigned long long)numberOfAccounts;
+(BOOL)deleteAccount:(id)arg1 ;
+(id)migrate:(id)arg1 ;
+(BOOL)saveAccount:(id)arg1 ;
+(id)localizedServiceName;
+(Class)loginViewControllerClass;
+(BOOL)allowsMultipleAccounts;
+(id)pendingIgnoredNotifications;
+(void)notifyAccountsChanged;
+(void)setShouldIgnoreNotificationForService:(id)arg1 ;
+(id)addAccountObserver:(/*^block*/id)arg1 ;
+(void)removeAccountObserver:(id)arg1 ;
+(BOOL)shouldIgnoreNotificationForService:(id)arg1 ;
+(void)handleChangeForService:(id)arg1 ;
+(void)useAccountObservers:(/*^block*/id)arg1 ;
+(id)accountCache;
+(unsigned long long)_numberOfAccounts;
+(void)addAccountObserver:(/*^block*/id)arg1 forService:(id)arg2 ;
-(NSString *)accountID;
-(NSString *)localizedName;
-(NSDate *)createdAt;
-(id)init;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
-(NSDate *)updatedAt;
-(void)invalidateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

