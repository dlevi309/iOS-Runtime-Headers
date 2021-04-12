/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSSet;

@interface AMSAcknowledgePrivacyTask : AMSTask {

	ACAccount* _account;
	NSSet* _privacyIdentifiers;

}

@property (nonatomic,copy) NSSet * privacyIdentifiers;              //@synthesize privacyIdentifiers=_privacyIdentifiers - In the implementation block
@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
+(unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1 ;
+(id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2 ;
+(id)_accountStoreForPrivacyIdentifier:(id)arg1 ;
+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
+(id)_storePrivacyIdentifiers;
+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
-(id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2 ;
-(NSSet *)privacyIdentifiers;
-(id)initWithPrivacyIdentifiers:(id)arg1 ;
-(id)acknowledgePrivacy;
-(void)setPrivacyIdentifiers:(NSSet *)arg1 ;
@end

