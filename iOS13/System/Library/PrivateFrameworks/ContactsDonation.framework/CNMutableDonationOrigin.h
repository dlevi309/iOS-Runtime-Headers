/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <ContactsDonation/CNDonationOrigin.h>

@class NSString, NSDate;

@interface CNMutableDonationOrigin : CNDonationOrigin

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * donationIdentifier; 
@property (nonatomic,copy) NSString * clusterIdentifier; 
@property (nonatomic,copy) NSDate * donationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
+(id)new;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDonationIdentifier:(NSString *)arg1 ;
-(void)setClusterIdentifier:(NSString *)arg1 ;
-(void)setDonationDate:(NSDate *)arg1 ;
@end

