/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying> {

	long long _subscriptionSlot;

}

@property (nonatomic,readonly) long long subscriptionSlot;              //@synthesize subscriptionSlot=_subscriptionSlot - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)phoneSubscriptionsFromCTSIMs:(id)arg1 ;
+(id)CTSIMSFromPhoneSubscriptions:(id)arg1 ;
+(id)phoneSubscriptionWithSIM:(id)arg1 ;
+(id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1 ;
-(BOOL)isEqualToPhoneSubscription:(id)arg1 ;
-(id)initWithSubscriptionSlot:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)matchingSim;
-(long long)subscriptionSlot;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

