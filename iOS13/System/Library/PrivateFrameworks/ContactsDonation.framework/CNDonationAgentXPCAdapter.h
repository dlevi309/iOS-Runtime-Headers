/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDonationAgentAdapter.h>

@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newXPCConnection;
+(void)donateMeCardValues:(id)arg1 scope:(id)arg2 ;
+(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 scope:(id)arg2 ;
+(void)fetchDonatedMeCardWithScope:(id)arg1 ;
+(void)meCardDonationsWithScope:(id)arg1 ;
+(void)rejectValueWithDonationIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)changeFromAccount:(id)arg1 toAccount:(id)arg2 scope:(id)arg3 ;
+(void)rejectValuesWithClusterIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)removeAllRejectionsWithScope:(id)arg1 ;
-(id)donatedMeCardEither;
-(id)meCardDonations;
-(id)donateMeCardValues:(id)arg1 ;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1 ;
-(id)fetchDonatedMeCard;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(id)rejectValueWithDonationIdentifier:(id)arg1 ;
-(id)rejectValuesWithClusterIdentifier:(id)arg1 ;
-(id)removeAllRejections;
@end

