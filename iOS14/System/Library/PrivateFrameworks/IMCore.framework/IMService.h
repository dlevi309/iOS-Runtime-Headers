/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)notificationCenter;
+(unsigned long long)myStatus;
+(id)facetimeService;
+(id)smsService;
+(id)iMessageService;
+(id)serviceWithName:(id)arg1 ;
+(id)callService;
+(id)allServicesNonBlocking;
+(id)allServices;
+(id)myIdleTime;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
-(BOOL)__ck_isSMS;
-(BOOL)__ck_isiMessage;
-(char)__ck_displayColor;
-(char)__ck_serviceType;
-(long long)__ck_maxRecipientCountForHandle:(id)arg1 simID:(id)arg2 ;
-(id)__ck_displayName;
-(id)canonicalFormOfID:(id)arg1 ;
-(void)logout;
-(id)localizedShortName;
-(id)localizedName;
-(void)login;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)name;
-(id)myScreenNames;
-(BOOL)initialSyncPerformed;
-(BOOL)isEnabled;
-(id)infoForScreenName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)status;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
@end

