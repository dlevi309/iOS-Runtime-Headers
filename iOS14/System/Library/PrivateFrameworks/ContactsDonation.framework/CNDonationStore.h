/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationAgentAdapter;
@interface CNDonationStore : NSObject {

	id<CNDonationAgentAdapter> _adapter;

}

@property (nonatomic,readonly) id<CNDonationAgentAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
-(void)donateMeCardValues:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)meCardDonations;
-(void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAdapter:(id)arg1 ;
-(id<CNDonationAgentAdapter>)adapter;
-(void)rejectValuesWithClusterIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDonatedMeCard:(/*^block*/id)arg1 ;
-(void)removeAllRejectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)donatedMeCardEither;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(id)donatedMeCard;
@end

