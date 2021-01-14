/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSRequest.h>

@interface TPSCallClassRequest : TPSRequest {

	int _callClass;

}

@property (assign,nonatomic) int callClass;              //@synthesize callClass=_callClass - In the implementation block
+(id)unarchivedObjectClasses;
-(void)setCallClass:(int)arg1 ;
-(int)callClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
@end

