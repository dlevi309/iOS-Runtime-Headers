/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/


@protocol CardDAVDelegateInfoProvider;
@class NSString, ACAccountStore;

@interface CardDAVDelegateManager : NSObject {

	id<CardDAVDelegateInfoProvider> _delegateProvider;
	NSString* _accountID;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                 //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) id<CardDAVDelegateInfoProvider> delegateProvider;              //@synthesize delegateProvider=_delegateProvider - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                          //@synthesize accountID=_accountID - In the implementation block
+(void)finishFutures:(id)arg1 ;
-(id)account;
-(ACAccountStore *)accountStore;
-(NSString *)accountID;
-(id)removeAccount:(id)arg1 ;
-(id)addChildWithDelegateInfo:(id)arg1 ;
-(id)saveAccount:(id)arg1 ;
-(void)updateDelegates;
-(id)existingChildAccountsWithProperty:(id)arg1 ;
-(id)collectDelegateInfo;
-(id<CardDAVDelegateInfoProvider>)delegateProvider;
-(id)initWithDelegateInfoProvider:(id)arg1 accountID:(id)arg2 ;
-(id)collectExpiredDelegateInfo;
@end

