/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSResponse.h>

@class CTCallForwardingValue;

@interface TPSCallForwardingResponse : TPSResponse {

	CTCallForwardingValue* _value;

}

@property (nonatomic,readonly) CTCallForwardingValue * value;              //@synthesize value=_value - In the implementation block
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CTCallForwardingValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 value:(id)arg3 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
@end

