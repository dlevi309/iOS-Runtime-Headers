/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@class NSString, NSData;

@interface BRAccount : NSObject {

	NSString* _accountID;
	NSData* _perAppAccountIdentifier;

}

@property (nonatomic,copy) NSData * perAppAccountIdentifier;              //@synthesize perAppAccountIdentifier=_perAppAccountIdentifier - In the implementation block
+(void)startAccountTokenChangeObserverIfNeeded;
+(BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)refreshCurrentLoggedInAccount;
+(id)currentCachedLoggedInAccountWithError:(id*)arg1 ;
+(id)currentLoggedInAccountWithError:(id*)arg1 ;
-(NSData *)perAppAccountIdentifier;
-(void)setPerAppAccountIdentifier:(NSData *)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(BOOL)loginWithError:(id*)arg1 ;
-(BOOL)logoutWithError:(id*)arg1 ;
-(id)containerWithPendingChanges;
-(BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasOptimizeStorageWithError:(id*)arg1 ;
-(BOOL)setOptimizeStorageEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)getEvictableSpace:(id*)arg1 error:(id*)arg2 ;
-(void)evictOldDocumentsWithHandler:(/*^block*/id)arg1 ;
@end

