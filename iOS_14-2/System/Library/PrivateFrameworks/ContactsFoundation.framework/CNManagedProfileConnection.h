/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNManagedProfileConnection.h>

@protocol CNManagedProfileConnection <NSObject>
@required
-(BOOL)isOpenInRestrictionInEffect;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;

@end


@class MCProfileConnection, NSString;

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection> {

	MCProfileConnection* _profileConnection;

}

@property (nonatomic,retain) MCProfileConnection * profileConnection;              //@synthesize profileConnection=_profileConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(BOOL)isOpenInRestrictionInEffect;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3 ;
-(id)init;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3 ;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(MCProfileConnection *)profileConnection;
-(id)initWithProfileConnection:(id)arg1 ;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2 ;
@end

