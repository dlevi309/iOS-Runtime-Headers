/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)contactsEditable;
-(long long)contactManagementState;
-(void)setContactManagementState:(long long)arg1 ;
-(void)setContactsEditable:(BOOL)arg1 ;
-(long long)screenTimeCommunicationLimit;
-(long long)downtimeCommunicationLimit;
-(void)setDowntimeCommunicationLimit:(long long)arg1 ;
-(void)setScreenTimeCommunicationLimit:(long long)arg1 ;
@end

