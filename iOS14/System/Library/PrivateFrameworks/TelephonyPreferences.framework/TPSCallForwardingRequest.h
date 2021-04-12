/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallClassRequest.h>

@interface TPSCallForwardingRequest : TPSCallClassRequest {

	int _reason;

}

@property (nonatomic,readonly) int reason;              //@synthesize reason=_reason - In the implementation block
+(id)unarchivedObjectClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(int)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
-(id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2 ;
@end

