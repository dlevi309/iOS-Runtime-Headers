/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/


#import <SoftwareUpdateServicesUI/SoftwareUpdateServicesUI-Structs.h>
@class NSNumber;

@interface SUSUIPreferences : NSObject {

	BOOL _alertAfterDownload;
	NSNumber* _passcodeRequiredDays;
	BOOL _needsAlertPresentationAfterOTAUpdate;

}

@property (nonatomic,readonly) BOOL alertAfterDownload;                                                                              //@synthesize alertAfterDownload=_alertAfterDownload - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * passcodeRequiredDays;                                                               //@synthesize passcodeRequiredDays=_passcodeRequiredDays - In the implementation block
@property (assign,setter=setNeedsAlertPresentationAfterOTAUpdate:,nonatomic) BOOL needsAlertPresentationAfterOTAUpdate;              //@synthesize needsAlertPresentationAfterOTAUpdate=_needsAlertPresentationAfterOTAUpdate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_loadPreferences;
-(void)_setBooleanPreferenceForKey:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(id)_copyNumberPreferenceForKey:(id)arg1 ;
-(id)_copyStringPreferenceForKey:(id)arg1 ;
-(void*)_copyPreferenceForKey:(CFStringRef)arg1 ofType:(unsigned long long)arg2 ;
-(BOOL)needsAlertPresentationAfterOTAUpdate;
-(void)setNeedsAlertPresentationAfterOTAUpdate:(BOOL)arg1 ;
-(BOOL)alertAfterDownload;
-(NSNumber *)passcodeRequiredDays;
@end

