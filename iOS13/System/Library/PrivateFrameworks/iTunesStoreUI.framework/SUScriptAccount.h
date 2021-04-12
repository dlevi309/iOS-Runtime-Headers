/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {

	SSAccount* _account;

}

@property (retain) SSAccount * account; 
@property (copy) NSString * credits; 
@property (retain) NSNumber * dsID; 
@property (copy) NSString * identifier; 
@property (readonly) NSString * ITunesPassSerialNumber; 
@property (copy) NSString * kind; 
@property (getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount; 
@property (retain) id lockerEnabled; 
@property (retain) id purchaseHistoryEnabled; 
@property (retain) id socialEnabled; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(id)_className;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(id)attributeKeys;
-(BOOL)isManagedAppleID;
-(void)setSecureToken:(id)arg1 ;
-(NSString *)ITunesPassSerialNumber;
-(void)setSocialEnabled:(id)arg1 ;
-(NSString *)credits;
-(void)setCredits:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(NSNumber *)dsID;
-(void)_commitChanges;
-(void)_setServiceType:(long long)arg1 enabled:(id)arg2 ;
-(BOOL)isPrimaryAccount;
-(BOOL)isSecureTokenValid;
-(id)isPrimaryLockerAccount;
-(id)lockerEnabled;
-(id)purchaseHistoryEnabled;
-(void)setDsID:(NSNumber *)arg1 ;
-(void)setLockerEnabled:(id)arg1 ;
-(void)setPurchaseHistoryEnabled:(id)arg1 ;
-(id)socialEnabled;
@end

