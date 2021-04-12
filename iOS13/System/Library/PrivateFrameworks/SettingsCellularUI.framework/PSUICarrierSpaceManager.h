/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <libobjc.A.dylib/CTCarrierSpaceClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CTCarrierSpaceCapabilities, CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo, PSUIAppInstallController, NSNumber, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, CTCarrierSpaceClient, NSString;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate> {

	NSObject*<OS_dispatch_queue> _carrierSpaceQueue;
	CTCarrierSpaceCapabilities* _capabilities;
	CTCarrierSpaceUsageInfo* _usageInfo;
	CTCarrierSpacePlansInfo* _plansInfo;
	CTCarrierSpaceAppsInfo* _appsInfo;
	PSUIAppInstallController* _carrierAppInstallController;
	NSNumber* _hasUserConsent;
	CTCarrierSpaceUserConsentFlowInfo* _userConsentFlowInfo;
	NSNumber* _userConsentResponse;
	CTServerConnectionRef _serverConnection;
	CoreTelephonyClient* _coreTelephonyClient;
	CTCarrierSpaceClient* _carrierSpaceClient;

}

@property (nonatomic,retain) CTCarrierSpaceClient * carrierSpaceClient;              //@synthesize carrierSpaceClient=_carrierSpaceClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2 ;
+(int)carrierMetricTypeForString:(id)arg1 ;
+(BOOL)isCarrierMetricTypeValid:(int)arg1 ;
+(id)getNSURLSessionConfiguration;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)refresh;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)capabilities;
-(id)usageInfo;
-(id)plansInfo;
-(id)appsInfo;
-(void)capabilitiesDidChange:(id)arg1 ;
-(void)userConsentFlowInfoDidChange;
-(void)usageDidChange;
-(void)plansDidChange;
-(void)appsDidChange;
-(id)descriptionForPlanMetrics:(id)arg1 ;
-(BOOL)hasUserConsent;
-(BOOL)planChangeIsRestricted;
-(id)subscribedPlanOptions;
-(id)subscribedDomesticPlanOptions;
-(id)planMetrics;
-(id)userConsentFlowInfo;
-(void)setUserConsent:(BOOL)arg1 ;
-(void)userConsentAcknowledged:(BOOL)arg1 ;
-(void)refreshAndReload;
-(BOOL)supportsSweetgum;
-(id)localizedDataStringFromBytes:(unsigned long long)arg1 ;
-(id)carrierAppInstallController;
-(CTCarrierSpaceClient *)carrierSpaceClient;
-(void)setCarrierSpaceClient:(CTCarrierSpaceClient *)arg1 ;
@end

