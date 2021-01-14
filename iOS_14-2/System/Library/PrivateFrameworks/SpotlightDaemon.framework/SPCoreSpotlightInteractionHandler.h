/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)interestingContactIdentifiersFromIntent:(id)arg1 ;
-(id)attributeForIntent:(id)arg1 direction:(long long)arg2 ;
@end

