/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephonyClientDataDelegateInternal.h>
#import <CoreTelephony/CoreTelephonyClientRegistrationDelegateInternal.h>

@protocol CTTelephonyNetworkInfoDelegate;
@class CoreTelephonyClient, CTServiceDescriptorContainer, NSMutableDictionary, NSString, CTCarrier, NSDictionary;

@interface CTTelephonyNetworkInfo : NSObject <CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal> {

	CoreTelephonyClient* _client;
	/*^block*/id _serviceSubscriberCellularProvidersDidUpdateNotifier;
	/*^block*/id _subscriberCellularProviderDidUpdateNotifier;
	BOOL _initialized;
	CTServiceDescriptorContainer* _descriptors;
	id<CTTelephonyNetworkInfoDelegate> _delegate;
	NSMutableDictionary* _serviceSubscriberCellularProviders;
	NSMutableDictionary* _cachedCurrentRadioAccessTechnology;
	NSMutableDictionary* _cachedSignalStrength;
	NSMutableDictionary* _cachedCellIds;

}

@property (retain) NSMutableDictionary * serviceSubscriberCellularProviders;                           //@synthesize serviceSubscriberCellularProviders=_serviceSubscriberCellularProviders - In the implementation block
@property (retain) NSMutableDictionary * cachedCurrentRadioAccessTechnology;                           //@synthesize cachedCurrentRadioAccessTechnology=_cachedCurrentRadioAccessTechnology - In the implementation block
@property (retain) NSMutableDictionary * cachedSignalStrength;                                         //@synthesize cachedSignalStrength=_cachedSignalStrength - In the implementation block
@property (retain) NSMutableDictionary * cachedCellIds;                                                //@synthesize cachedCellIds=_cachedCellIds - In the implementation block
@property (readonly) CTServiceDescriptorContainer * descriptors;                                       //@synthesize descriptors=_descriptors - In the implementation block
@property (copy,readonly) NSString * dataServiceIdentifier; 
@property (__weak) id<CTTelephonyNetworkInfoDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) CTCarrier * subscriberCellularProvider; 
@property (nonatomic,copy) id serviceSubscriberCellularProvidersDidUpdateNotifier;                     //@synthesize serviceSubscriberCellularProvidersDidUpdateNotifier=_serviceSubscriberCellularProvidersDidUpdateNotifier - In the implementation block
@property (nonatomic,copy) id subscriberCellularProviderDidUpdateNotifier; 
@property (nonatomic,retain,readonly) NSDictionary * serviceCurrentRadioAccessTechnology; 
@property (nonatomic,retain,readonly) NSString * currentRadioAccessTechnology; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CTTelephonyNetworkInfoDelegate>)delegate;
-(void)setDelegate:(id<CTTelephonyNetworkInfoDelegate>)arg1 ;
-(CTCarrier *)subscriberCellularProvider;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)cellChanged:(id)arg1 cell:(id)arg2 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)currentDataServiceDescriptorChanged:(id)arg1 ;
-(void)carrierBundleChange:(id)arg1 ;
-(id)cellId;
-(CTServiceDescriptorContainer *)descriptors;
-(id)initWithClient:(id)arg1 ;
-(void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1 ;
-(NSMutableDictionary *)serviceSubscriberCellularProviders;
-(void)setCachedCurrentRadioAccessTechnology:(NSMutableDictionary *)arg1 ;
-(void)setCachedSignalStrength:(NSMutableDictionary *)arg1 ;
-(void)setCachedCellIds:(NSMutableDictionary *)arg1 ;
-(BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL*)arg1 forContext:(id)arg2 ;
-(void)queryRat;
-(void)queryCTSignalStrength;
-(BOOL)getCarrierName:(id)arg1 forContext:(id)arg2 withError:(id*)arg3 ;
-(BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 forContext:(id)arg3 withError:(id*)arg4 ;
-(BOOL)getMobileNetworkCode:(id)arg1 forContext:(id)arg2 withError:(id*)arg3 ;
-(BOOL)getAllowsVOIP:(BOOL*)arg1 forContext:(id)arg2 withError:(id*)arg3 ;
-(void)queryRatForDescriptor:(id)arg1 ;
-(void)updateCellId:(id)arg1 forDescriptor:(id)arg2 ;
-(void)updateSignalStrength:(id)arg1 descriptor:(id)arg2 ;
-(NSMutableDictionary *)cachedSignalStrength;
-(void)postNotificationIfReady:(id)arg1 object:(id)arg2 ;
-(void)querySignalStrengthForDescriptor:(id)arg1 ;
-(void)updateRat:(id)arg1 descriptor:(id)arg2 ;
-(NSMutableDictionary *)cachedCurrentRadioAccessTechnology;
-(void)updateLegacyRat:(id)arg1 ;
-(NSMutableDictionary *)cachedCellIds;
-(id)getFirstCellId;
-(void)queryCellIds;
-(/*^block*/id)serviceSubscribersCellularProviderDidUpdateNotifier;
-(id)subscriberCellularProviderDidUpdateNotifier;
-(void)setServiceSubscriberCellularProviderDidUpdateNotifier:(/*^block*/id)arg1 ;
-(NSString *)dataServiceIdentifier;
-(NSDictionary *)serviceCurrentRadioAccessTechnology;
-(NSString *)currentRadioAccessTechnology;
-(id)serviceSignalStrength;
-(id)signalStrength;
-(id)serviceCellId;
-(id)radioAccessTechnology;
-(void)setServiceSubscriberCellularProviders:(NSMutableDictionary *)arg1 ;
-(id)serviceSubscriberCellularProvidersDidUpdateNotifier;
-(void)setServiceSubscriberCellularProvidersDidUpdateNotifier:(id)arg1 ;
@end

