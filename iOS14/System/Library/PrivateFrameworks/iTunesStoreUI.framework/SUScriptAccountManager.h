/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSMutableArray, NSLock, NSArray;

@interface SUScriptAccountManager : NSObject {

	NSMutableArray* _accounts;
	NSLock* _lock;

}

@property (retain,readonly) NSArray * accounts; 
+(void)endAccountManagerSessionForObject:(id)arg1 ;
+(id)beginAccountManagerSessionForObject:(id)arg1 ;
-(NSArray *)accounts;
-(id)accountForDSID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_ntsReloadAccounts;
@end

