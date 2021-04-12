/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)notificationCenter;
+(id)callService;
+(id)facetimeService;
+(id)allServices;
+(id)smsService;
+(id)iMessageService;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)myIdleTime;
+(unsigned long long)myStatus;
+(BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(unsigned long long)statusForIMPerson:(id)arg1 ;
+(unsigned long long)statusForABPerson:(id)arg1 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
-(BOOL)__ck_isiMessage;
-(char)__ck_displayColor;
-(char)__ck_serviceType;
-(BOOL)__ck_isSMS;
-(long long)__ck_maxRecipientCountForHandle:(id)arg1 simID:(id)arg2 ;
-(id)__ck_displayName;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedName;
-(id)localizedShortName;
-(unsigned long long)status;
-(BOOL)isEnabled;
-(void)login;
-(void)logout;
-(BOOL)initialSyncPerformed;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
@end

