/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationAgentAdapter <NSObject>
@required
-(id)donatedMeCardEither;
-(id)meCardDonations;
-(id)donateMeCardValues:(id)arg1;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1;
-(id)fetchDonatedMeCard;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
-(id)rejectValueWithDonationIdentifier:(id)arg1;
-(id)rejectValuesWithClusterIdentifier:(id)arg1;
-(id)removeAllRejections;

@end

