/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)interestingContactIdentifiersFromIntent:(id)arg1 ;
-(id)attributeForIntent:(id)arg1 direction:(long long)arg2 ;
@end

