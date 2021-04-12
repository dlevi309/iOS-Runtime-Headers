/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(id)initWithServerHandle:(id)arg1 stateProvider:(id)arg2 ;
-(id)initWithServerHandle:(id)arg1 ;
-(void)_updateDataForSlot:(long long)arg1 ;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(STTelephonyStatusDomainPublisher *)telephonyDomainPublisher;
-(void)_populateSIMInfo:(id)arg1 forStateProvider:(id)arg2 subscriptionInfo:(id)arg3 slot:(long long)arg4 ;
-(unsigned long long)_serviceStateForStateProvider:(id)arg1 registrationStatus:(unsigned long long)arg2 countryCode:(id)arg3 ;
-(id)_serviceDescriptionForStateProvider:(id)arg1 subscriptionInfo:(id)arg2 outSecondaryServiceDescription:(id*)arg3 ;
-(unsigned long long)_dataNetworkTypeForDataConnectionType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowEmergencyOnlyStatusForStateProvider:(id)arg1 registrationStatus:(unsigned long long)arg2 countryCode:(id)arg3 ;
-(id)_displayStringForSIMStatus:(id)arg1 ;
-(id)_displayStringForRegistrationStatus:(unsigned long long)arg1 ;
-(BOOL)_simStatusMeansLocked:(id)arg1 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
@end

