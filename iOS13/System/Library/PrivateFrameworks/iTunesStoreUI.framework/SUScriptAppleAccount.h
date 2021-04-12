/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)identifier;
-(id)_className;
-(NSString *)username;
-(NSString *)accountDescription;
-(SUScriptAppleAccountType *)accountType;
-(SUScriptAppleAccountCredential *)credential;
-(void)reload;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(ACAccount *)nativeAccount;
-(NSString *)dsID;
-(id)initWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)setAgeVerificationExpirationDate:(id)arg1 completionHandler:(id)arg2 ;
-(ACAccountStore *)nativeAccountStore;
@end

