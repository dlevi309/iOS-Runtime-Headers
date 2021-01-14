/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol CLAPIEngineDelegate;
@class NSString, NSURL, NSMutableSet;

@interface CLAPIEngine : NSObject {

	NSString* _email;
	NSString* _password;
	NSURL* _baseURL;
	id<CLAPIEngineDelegate> _delegate;
	NSMutableSet* _transactions;
	BOOL _clearsCookies;

}

@property (nonatomic,copy) NSString * email;                                //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) id<CLAPIEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * transactions;                   //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) BOOL clearsCookies;                            //@synthesize clearsCookies=_clearsCookies - In the implementation block
+(id)engine;
+(void)initialize;
+(id)defaultBaseURL;
+(id)engineWithDelegate:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setTransactions:(NSMutableSet *)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(NSURL *)baseURL;
-(id)init;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id<CLAPIEngineDelegate>)delegate;
-(NSMutableSet *)transactions;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSString *)password;
-(void)setDelegate:(id<CLAPIEngineDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isReady;
-(NSString *)email;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)createAccountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(BOOL)arg3 userInfo:(id)arg4 ;
-(id)changeNameOfItem:(id)arg1 toName:(id)arg2 userInfo:(id)arg3 ;
-(id)changeNameOfItemAtHref:(id)arg1 toName:(id)arg2 userInfo:(id)arg3 ;
-(id)changePrivacyOfItem:(id)arg1 toPrivate:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)changePrivacyOfItemAtHref:(id)arg1 toPrivate:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)getAccountInformationWithUserInfo:(id)arg1 ;
-(id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 options:(id)arg3 userInfo:(id)arg4 ;
-(id)restoreItem:(id)arg1 userInfo:(id)arg2 ;
-(id)restoreItemAtHref:(id)arg1 userInfo:(id)arg2 ;
-(id)deleteItem:(id)arg1 userInfo:(id)arg2 ;
-(id)getItemInformationAtURL:(id)arg1 userInfo:(id)arg2 ;
-(id)getItemInformation:(id)arg1 userInfo:(id)arg2 ;
-(id)deleteItemAtHref:(id)arg1 userInfo:(id)arg2 ;
-(id)getItemListStartingAtPage:(long long)arg1 itemsPerPage:(long long)arg2 userInfo:(id)arg3 ;
-(id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 userInfo:(id)arg4 ;
-(id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 showOnlyItemsInTrash:(BOOL)arg4 userInfo:(id)arg5 ;
-(id)uploadFileWithName:(id)arg1 fileData:(id)arg2 userInfo:(id)arg3 ;
-(id)uploadFileWithName:(id)arg1 fileData:(id)arg2 options:(id)arg3 userInfo:(id)arg4 ;
-(id)uploadFileWithName:(id)arg1 fileURL:(id)arg2 options:(id)arg3 userInfo:(id)arg4 ;
-(id)uploadFileWithName:(id)arg1 fileData:(id)arg2 fileURL:(id)arg3 options:(id)arg4 userInfo:(id)arg5 ;
-(id)getStoreProductsWithUserInfo:(id)arg1 ;
-(id)redeemStoreReceipt:(id)arg1 userInfo:(id)arg2 ;
-(void)cancelConnection:(id)arg1 ;
-(void)cancelAllConnections;
-(id)userInfoForConnectionIdentifier:(id)arg1 ;
-(long long)requestTypeForConnectionIdentifier:(id)arg1 ;
-(id)_createAndStartConnectionForTransaction:(id)arg1 ;
-(id)_transactionForConnection:(id)arg1 ;
-(id)_transactionForConnectionIdentifier:(id)arg1 ;
-(id)_URLWithPath:(id)arg1 ;
-(BOOL)clearsCookies;
-(void)setClearsCookies:(BOOL)arg1 ;
@end

