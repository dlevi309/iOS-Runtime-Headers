/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSResponse.h>

@interface TPSCallingLineIdRestrictionResponse : TPSResponse {

	BOOL _editable;
	long long _state;

}

@property (getter=isEditable,nonatomic,readonly) BOOL editable;              //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEditable;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
-(id)initWithsubscriptionContext:(id)arg1 editable:(BOOL)arg2 state:(long long)arg3 error:(id)arg4 ;
@end

