/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_storePrivacyIdentifiers;
+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1 ;
+(id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2 ;
+(id)_accountStoreForPrivacyIdentifier:(id)arg1 ;
+(unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 ;
+(BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
+(BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2 ;
-(NSSet *)privacyIdentifiers;
-(id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2 ;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(id)acknowledgePrivacy;
-(id)initWithPrivacyIdentifiers:(id)arg1 ;
-(void)setPrivacyIdentifiers:(NSSet *)arg1 ;
@end

