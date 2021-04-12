/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1 ;
+(id)CTSIMSFromPhoneSubscriptions:(id)arg1 ;
+(id)phoneSubscriptionsFromCTSIMs:(id)arg1 ;
+(id)phoneSubscriptionWithSIM:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)subscriptionSlot;
-(id)matchingSim;
-(id)initWithSubscriptionSlot:(long long)arg1 ;
-(BOOL)isEqualToPhoneSubscription:(id)arg1 ;
@end

