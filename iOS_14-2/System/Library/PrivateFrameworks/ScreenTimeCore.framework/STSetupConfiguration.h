/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class STUserID, STOpaquePasscode, NSSet;

@interface STSetupConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _userHasContacts;
	STUserID* _associatedUser;
	long long _screenTimeState;
	STOpaquePasscode* _passcode;
	long long _contactManagementState;

}

@property (readonly) BOOL userHasContacts;                                       //@synthesize userHasContacts=_userHasContacts - In the implementation block
@property (copy,readonly) STUserID * associatedUser;                             //@synthesize associatedUser=_associatedUser - In the implementation block
@property (readonly) long long screenTimeState;                                  //@synthesize screenTimeState=_screenTimeState - In the implementation block
@property (copy,readonly) NSSet * availableScreenTimeStates; 
@property (copy,readonly) STOpaquePasscode * passcode;                           //@synthesize passcode=_passcode - In the implementation block
@property (readonly) long long contactManagementState;                           //@synthesize contactManagementState=_contactManagementState - In the implementation block
@property (copy,readonly) NSSet * availableContactManagementStates; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isContactManagementStateValid:(long long)arg1 pairedWithUserHasContacts:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)contactManagementState;
-(id)description;
-(STOpaquePasscode *)passcode;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithUser:(id)arg1 screenTimeState:(long long)arg2 passcode:(id)arg3 contactManagementState:(long long)arg4 userHasContacts:(BOOL)arg5 ;
-(STUserID *)associatedUser;
-(long long)screenTimeState;
-(NSSet *)availableScreenTimeStates;
-(id)_descriptionForScreenTimeStates:(id)arg1 ;
-(NSSet *)availableContactManagementStates;
-(id)_descriptionForContactManagementStates:(id)arg1 ;
-(BOOL)userHasContacts;
-(BOOL)isEqualToSetupConfiguration:(id)arg1 ;
-(id)initWithUser:(id)arg1 screenTimeState:(long long)arg2 passcode:(id)arg3 contactManagementState:(long long)arg4 userHasContacts:(BOOL)arg5 error:(id*)arg6 ;
-(id)configurationWithUpdatedScreenTimeState:(long long)arg1 error:(id*)arg2 ;
-(id)configurationWithUpdatedContactManagementState:(long long)arg1 error:(id*)arg2 ;
-(id)configurationWithUpdatedPasscode:(id)arg1 ;
@end

