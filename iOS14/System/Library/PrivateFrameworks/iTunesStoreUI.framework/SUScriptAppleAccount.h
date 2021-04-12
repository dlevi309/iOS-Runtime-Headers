/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountType, SUScriptAppleAccountCredential;

@interface SUScriptAppleAccount : SUScriptObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccount * nativeAccount; 
@property (readonly) ACAccountStore * nativeAccountStore; 
@property (readonly) NSString * accountDescription; 
@property (readonly) SUScriptAppleAccountType * accountType; 
@property (readonly) SUScriptAppleAccountCredential * credential; 
@property (readonly) NSString * dsID; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * username; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)accountDescription;
-(SUScriptAppleAccountType *)accountType;
-(SUScriptAppleAccountCredential *)credential;
-(NSString *)dsID;
-(id)attributeKeys;
-(NSString *)username;
-(void)reload;
-(NSString *)identifier;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(ACAccount *)nativeAccount;
-(id)initWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)setAgeVerificationExpirationDate:(id)arg1 completionHandler:(id)arg2 ;
-(ACAccountStore *)nativeAccountStore;
@end

