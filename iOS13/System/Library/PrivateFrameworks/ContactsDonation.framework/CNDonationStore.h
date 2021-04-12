/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationAgentAdapter;
@interface CNDonationStore : NSObject {

	id<CNDonationAgentAdapter> _adapter;

}

@property (nonatomic,readonly) id<CNDonationAgentAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
-(id)init;
-(id<CNDonationAgentAdapter>)adapter;
-(id)donatedMeCardEither;
-(id)initWithAdapter:(id)arg1 ;
-(void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)meCardDonations;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(void)donateMeCardValues:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDonatedMeCard:(/*^block*/id)arg1 ;
-(id)donatedMeCard;
-(void)rejectValuesWithClusterIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllRejectionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

