/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallingLineIdRestrictionRequest.h>

@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest {

	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
+(id)unarchivedObjectClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2 ;
@end

