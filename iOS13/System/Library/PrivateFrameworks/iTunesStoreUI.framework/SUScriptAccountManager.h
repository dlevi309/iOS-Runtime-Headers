/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSArray *)accounts;
-(id)accountForDSID:(id)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_ntsReloadAccounts;
@end

