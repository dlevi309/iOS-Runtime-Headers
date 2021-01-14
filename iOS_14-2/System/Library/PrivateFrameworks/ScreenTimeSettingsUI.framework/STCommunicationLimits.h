/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface STCommunicationLimits : NSObject <NSCopying> {

	BOOL _contactsEditable;
	long long _screenTimeCommunicationLimit;
	long long _downtimeCommunicationLimit;
	long long _contactManagementState;

}

@property (assign) long long screenTimeCommunicationLimit;              //@synthesize screenTimeCommunicationLimit=_screenTimeCommunicationLimit - In the implementation block
@property (assign) long long downtimeCommunicationLimit;                //@synthesize downtimeCommunicationLimit=_downtimeCommunicationLimit - In the implementation block
@property (assign) long long contactManagementState;                    //@synthesize contactManagementState=_contactManagementState - In the implementation block
@property (assign) BOOL contactsEditable;                               //@synthesize contactsEditable=_contactsEditable - In the implementation block
+(BOOL)hasShownCompatibilityAlertForDSID:(id)arg1 ;
+(void)setHasShownCompatibilityAlert:(BOOL)arg1 forDSID:(id)arg2 ;
-(long long)contactManagementState;
-(void)setContactManagementState:(long long)arg1 ;
-(void)setContactsEditable:(BOOL)arg1 ;
-(BOOL)contactsEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)screenTimeCommunicationLimit;
-(long long)downtimeCommunicationLimit;
-(void)setDowntimeCommunicationLimit:(long long)arg1 ;
-(void)setScreenTimeCommunicationLimit:(long long)arg1 ;
@end

