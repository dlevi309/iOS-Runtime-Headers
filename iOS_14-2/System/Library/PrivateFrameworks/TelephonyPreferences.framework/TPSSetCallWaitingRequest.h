/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallWaitingRequest.h>

@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest {

	BOOL _enabled;

}

@property (nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)unarchivedObjectClasses;
-(BOOL)enabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 enabled:(BOOL)arg2 ;
@end

