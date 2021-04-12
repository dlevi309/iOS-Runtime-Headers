/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue, NPKAccountPassManagerDelegate;
@class NSObject, NSString, PKAccount, NSDate, NSMutableArray;

@interface NPKAccountPassManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _delegateCallbackQueue;
	id<NPKAccountPassManagerDelegate> _delegate;
	NSString* _accountIdentifier;
	PKAccount* _account;
	NSDate* _lastAccountUpdateDate;
	NSMutableArray* _accountDetails;

}

@property (nonatomic,retain) PKAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * lastAccountUpdateDate;                                 //@synthesize lastAccountUpdateDate=_lastAccountUpdateDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * accountDetails;                                //@synthesize accountDetails=_accountDetails - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;                                 //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<NPKAccountPassManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NPKAccountPassManagerDelegate>)delegate;
-(void)setDelegate:(id<NPKAccountPassManagerDelegate>)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(NSString *)accountIdentifier;
-(void)_updateAccount;
-(void)handleAccountsChangedNotification:(id)arg1 ;
-(NSDate *)lastAccountUpdateDate;
-(void)forceAccountRefresh;
-(NSMutableArray *)accountDetails;
-(void)setLastAccountUpdateDate:(NSDate *)arg1 ;
-(void)_updateAccountDetailsWithAccount:(id)arg1 ;
-(void)setAccountDetails:(NSMutableArray *)arg1 ;
-(id)initForAccountIdentifier:(id)arg1 ;
-(void)refreshAccountIfNecessary;
-(id)accountPassDetails;
@end

