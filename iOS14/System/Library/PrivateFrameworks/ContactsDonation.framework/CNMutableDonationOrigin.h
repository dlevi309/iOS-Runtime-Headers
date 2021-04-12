/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDonationIdentifier:(NSString *)arg1 ;
-(void)setClusterIdentifier:(NSString *)arg1 ;
-(void)setDonationDate:(NSDate *)arg1 ;
@end

