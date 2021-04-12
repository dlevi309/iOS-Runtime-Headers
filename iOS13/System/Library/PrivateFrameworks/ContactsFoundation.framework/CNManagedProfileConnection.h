/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNManagedProfileConnection.h>

@protocol CNManagedProfileConnection <NSObject>
@required
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;

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
-(id)init;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2 ;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3 ;
-(id)initWithProfileConnection:(id)arg1 ;
-(MCProfileConnection *)profileConnection;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
@end

