/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)rejectValuesWithClusterIdentifier:(id)arg1 ;
-(id)meCardDonations;
-(id)fetchDonatedMeCard;
-(id)removeAllRejections;
-(id)rejectValueWithDonationIdentifier:(id)arg1 ;
-(id)donateMeCardValues:(id)arg1 ;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1 ;
-(id)donatedMeCardEither;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
@end

