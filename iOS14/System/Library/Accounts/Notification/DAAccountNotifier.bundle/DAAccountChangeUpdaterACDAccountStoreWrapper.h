/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
*/

#import <DAAccountNotifier/DAAccountChangeHandlerAccountStoreUpdater.h>

@class ACAccount, ACDAccountStore, NSString;

@interface DAAccountChangeUpdaterACDAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {

	ACAccount* _account;
	ACDAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

