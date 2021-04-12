/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@interface CDPDFollowUpFactory : NSObject
+(id)contextToIdentifierMap;
-(BOOL)_supportsFaceID;
-(id)_localizedStringForKey:(id)arg1 ;
-(unsigned long long)secretType;
-(id)_followUpForOfflineSecretChangeWithContext:(id)arg1 ;
-(id)_followUpForRepairWithContext:(id)arg1 ;
-(id)_followUpForRecoveryKeyRepairWithContext:(id)arg1 ;
-(id)_followUpForSettingUpBiometricsWithContext:(id)arg1 ;
-(id)_baseFollowUpItemWithContext:(id)arg1 ;
-(id)_offlineSecretChangeFollowUpAction;
-(id)_followUpActionForRepair;
-(id)_followUpActionForRecoveryKeyRepair;
-(BOOL)_isBiometricCapable;
-(BOOL)_isBiometricAuthEnrolled;
-(id)identifierForContext:(id)arg1 ;
-(id)followUpItemWithContext:(id)arg1 ;
@end

