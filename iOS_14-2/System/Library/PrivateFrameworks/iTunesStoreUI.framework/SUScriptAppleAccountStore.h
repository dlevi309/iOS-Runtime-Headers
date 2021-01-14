/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject {

	ACAccountStore* _accountStore;
	NSString* _effectiveBundleID;

}

@property (readonly) SUScriptAppleAccount * activeStoreAccount; 
@property (readonly) NSString * effectiveBundleID; 
@property (readonly) SUScriptAppleAccount * primaryAppleAccount; 
@property (readonly) NSString * accessPurposeRead; 
@property (readonly) NSString * accessPurposeReadWrite; 
@property (readonly) NSString * accessPurposeWrite; 
@property (readonly) NSString * accountTypeIdentifierFacebook; 
@property (readonly) NSString * accountTypeIdentifierSinaWeibo; 
@property (readonly) NSString * accountTypeIdentifierTwitter; 
@property (readonly) long long renewResultFailed; 
@property (readonly) long long renewResultRejected; 
@property (readonly) long long renewResultRenewed; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(id)init;
-(id)_accountStore;
-(id)attributeKeys;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(NSString *)effectiveBundleID;
-(id)_className;
-(void)dealloc;
-(SUScriptAppleAccount *)primaryAppleAccount;
-(id)scriptAttributeKeys;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(id)makeClientAccessInfoWithAccountType:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2 ;
-(SUScriptAppleAccount *)activeStoreAccount;
-(NSString *)accessPurposeRead;
-(NSString *)accessPurposeReadWrite;
-(NSString *)accessPurposeWrite;
-(NSString *)accountTypeIdentifierFacebook;
-(NSString *)accountTypeIdentifierSinaWeibo;
-(NSString *)accountTypeIdentifierTwitter;
-(long long)renewResultFailed;
-(long long)renewResultRejected;
-(long long)renewResultRenewed;
@end

