/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/STTelephonyStateObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class STTelephonyStateProvider, STTelephonyStatusDomainPublisher, NSString;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable> {

	STTelephonyStateProvider* _telephonyStateProvider;
	STTelephonyStatusDomainPublisher* _telephonyDomainPublisher;

}

@property (nonatomic,readonly) STTelephonyStateProvider * telephonyStateProvider;                        //@synthesize telephonyStateProvider=_telephonyStateProvider - In the implementation block
@property (nonatomic,readonly) STTelephonyStatusDomainPublisher * telephonyDomainPublisher;              //@synthesize telephonyDomainPublisher=_telephonyDomainPublisher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(STTelephonyStatusDomainPublisher *)telephonyDomainPublisher;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(id)initWithServerHandle:(id)arg1 ;
-(id)_serviceDescriptionForStateProvider:(id)arg1 subscriptionInfo:(id)arg2 outSecondaryServiceDescription:(id*)arg3 ;
-(id)initWithServerHandle:(id)arg1 stateProvider:(id)arg2 ;
-(BOOL)_shouldShowEmergencyOnlyStatusForStateProvider:(id)arg1 registrationStatus:(unsigned long long)arg2 countryCode:(id)arg3 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)invalidate;
-(id)_displayStringForSIMStatus:(id)arg1 ;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(unsigned long long)_dataNetworkTypeForDataConnectionType:(unsigned long long)arg1 ;
-(BOOL)_simStatusMeansLocked:(id)arg1 ;
-(void)_populateSIMInfo:(id)arg1 forStateProvider:(id)arg2 subscriptionInfo:(id)arg3 slot:(long long)arg4 ;
-(unsigned long long)_serviceStateForStateProvider:(id)arg1 registrationStatus:(unsigned long long)arg2 countryCode:(id)arg3 ;
-(void)_updateDataForSlot:(long long)arg1 ;
-(id)_displayStringForRegistrationStatus:(unsigned long long)arg1 ;
-(void)dealloc;
@end

