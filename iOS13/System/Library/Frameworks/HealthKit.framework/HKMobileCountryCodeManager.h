/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
#import <HealthKit/HealthKit-Structs.h>
@class CoreTelephonyClient, NSObject, RadiosPreferences;

@interface HKMobileCountryCodeManager : NSObject {

	CoreTelephonyClient* _coreTelephonyClient;
	CTServerConnectionRef _coreTelephonyServerConnection;
	NSObject*<OS_dispatch_queue> _backgroundQueryQueue;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                        //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef coreTelephonyServerConnection;              //@synthesize coreTelephonyServerConnection=_coreTelephonyServerConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueryQueue;                //@synthesize backgroundQueryQueue=_backgroundQueryQueue - In the implementation block
@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                          //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
-(id)init;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)currentMobileCountryCodeFromCellularWithCompletion:(/*^block*/id)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(CTServerConnectionRef)coreTelephonyServerConnection;
-(void)setCoreTelephonyServerConnection:(CTServerConnectionRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueryQueue;
-(void)setBackgroundQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

