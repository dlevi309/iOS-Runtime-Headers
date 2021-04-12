/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(BOOL)isEditable;
-(id)archivedDataWithError:(id*)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
-(id)initWithsubscriptionContext:(id)arg1 editable:(BOOL)arg2 state:(long long)arg3 error:(id)arg4 ;
@end

