/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/


@protocol CardDAVDelegateInfoProvider;
@class NSString, ACAccountStore, CardDAVLocalDBHelper;

@interface CardDAVDelegateManager : NSObject {

	id<CardDAVDelegateInfoProvider> _delegateProvider;
	NSString* _accountID;
	ACAccountStore* _accountStore;
	CardDAVLocalDBHelper* _databaseHelper;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                 //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) CardDAVLocalDBHelper * databaseHelper;                         //@synthesize databaseHelper=_databaseHelper - In the implementation block
@property (nonatomic,readonly) id<CardDAVDelegateInfoProvider> delegateProvider;              //@synthesize delegateProvider=_delegateProvider - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                          //@synthesize accountID=_accountID - In the implementation block
+(void)finishFutures:(id)arg1 ;
-(NSString *)accountID;
-(id)account;
-(id)removeAccount:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)updateDelegates;
-(id)addChildWithDelegateInfo:(id)arg1 ;
-(CardDAVLocalDBHelper *)databaseHelper;
-(id)collectDelegateInfoReturningError:(id*)arg1 ;
-(id)existingChildAccountsWithProperty:(id)arg1 ;
-(id)saveAccount:(id)arg1 ;
-(void)deleteOrphanDatabasesLackingRepresentationInDelegateInfos:(id)arg1 ;
-(id<CardDAVDelegateInfoProvider>)delegateProvider;
-(id)initWithDelegateInfoProvider:(id)arg1 accountID:(id)arg2 databaseHelper:(id)arg3 ;
@end

