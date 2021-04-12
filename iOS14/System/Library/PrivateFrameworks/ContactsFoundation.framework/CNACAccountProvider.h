/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNACAccountProvider.h>

@protocol CNACAccountProvider <NSObject>
@required
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1;
-(id)childAccountsForAccount:(id)arg1;
-(BOOL)isAccountSyncable:(id)arg1;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1;

@end


@class NSString;

@interface CNACAccountProvider : NSObject <CNACAccountProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithStore:(id)arg1 ;
+(id)providerWithAccounts:(id)arg1 ;
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
@end

