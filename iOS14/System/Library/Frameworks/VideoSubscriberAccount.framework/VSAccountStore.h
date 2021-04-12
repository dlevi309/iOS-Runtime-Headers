/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSAccount, VSKeychainEditingContext, NSOperationQueue, VSRemoteNotifier, NSArray, NSUndoManager, NSString;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {

	BOOL _needsUpdateCachedFirstAccount;
	VSAccount* _cachedFirstAccount;
	VSKeychainEditingContext* _keychainEditingContext;
	NSOperationQueue* _keychainQueue;
	id _changeObserver;
	VSRemoteNotifier* _remoteNotifier;

}

@property (retain) VSAccount * cachedFirstAccount;                                           //@synthesize cachedFirstAccount=_cachedFirstAccount - In the implementation block
@property (assign) BOOL needsUpdateCachedFirstAccount;                                       //@synthesize needsUpdateCachedFirstAccount=_needsUpdateCachedFirstAccount - In the implementation block
@property (nonatomic,retain) VSKeychainEditingContext * keychainEditingContext;              //@synthesize keychainEditingContext=_keychainEditingContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * keychainQueue;                               //@synthesize keychainQueue=_keychainQueue - In the implementation block
@property (assign,nonatomic,__weak) id changeObserver;                                       //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                              //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)accountClass;
+(id)sharedAccountStore;
-(NSArray *)accounts;
-(id)init;
-(NSUndoManager *)undoManager;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(id)changeObserver;
-(void)setChangeObserver:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)firstAccount;
-(void)dealloc;
-(NSOperationQueue *)keychainQueue;
-(void)setKeychainQueue:(NSOperationQueue *)arg1 ;
-(void)setNeedsUpdateCachedFirstAccount:(BOOL)arg1 ;
-(BOOL)isFirstAccountLoaded;
-(BOOL)_updateCachedFirstAccount;
-(void)_sendLocalNotification;
-(VSKeychainEditingContext *)keychainEditingContext;
-(BOOL)needsUpdateCachedFirstAccount;
-(id)_keychainItemsWithLimit:(unsigned long long)arg1 ;
-(id)_accountForKeychainItem:(id)arg1 simulateExpiredToken:(BOOL)arg2 developerProviderIDs:(id)arg3 ;
-(VSAccount *)cachedFirstAccount;
-(void)setCachedFirstAccount:(VSAccount *)arg1 ;
-(void)fetchAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_insertAccount:(id)arg1 inContext:(id)arg2 ;
-(void)_sendRemoteNotification;
-(id)firstAccountIfLoaded;
-(void)saveAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setKeychainEditingContext:(VSKeychainEditingContext *)arg1 ;
@end

