/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccountStore, ACAccount, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	NSString* _appTokenID;
	BOOL _useAltDSID;
	NSString* _headerFieldKey;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
@property (nonatomic,retain) NSString * headerFieldKey;                    //@synthesize headerFieldKey=_headerFieldKey - In the implementation block
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(BOOL)useAltDSID;
-(NSString *)headerFieldKey;
-(ACAccountStore *)accountStore;
-(BOOL)signURLRequest:(id)arg1 ;
-(void)setHeaderFieldKey:(NSString *)arg1 ;
-(id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3 ;
-(ACAccount *)grandSlamAccount;
-(BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)setUseAltDSID:(BOOL)arg1 ;
@end

