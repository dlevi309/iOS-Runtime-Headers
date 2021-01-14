/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSArray, ACAccountStore;

@interface PSAccountEnumerator : NSObject {

	NSArray* _accounts;
	ACAccountStore* _accountStore;
	id _accountStoreDidChangeObserver;

}

@property (nonatomic,readonly) NSArray * accounts; 
-(NSArray *)accounts;
-(id)_accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)_visibleAccountTypeIDs;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(id)accountsForcingRefresh:(BOOL)arg1 ;
-(void)_loadAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

