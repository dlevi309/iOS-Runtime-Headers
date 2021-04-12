/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _donationIdentifier;
	NSString* _clusterIdentifier;
	NSDate* _donationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                          //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clusterIdentifier;                           //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * donationDate;                                  //@synthesize donationDate=_donationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSDictionary *)propertyListRepresentation;
-(NSString *)clusterIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)donationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)donationDate;
-(id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5 ;
-(id)initWithDonationOrigin:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4 ;
@end

