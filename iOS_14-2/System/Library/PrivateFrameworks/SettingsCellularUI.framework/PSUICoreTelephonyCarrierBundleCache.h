/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _carrierNameDict;
	NSMutableDictionary* _carrierBundleVersionDict;
	NSMutableDictionary* _volteCustomerCarePhoneNumberDict;
	NSMutableDictionary* _volteCustomerCareWebsiteDict;
	NSMutableDictionary* _showVolteWarningUnsupportedCarrierDict;
	NSMutableDictionary* _show5GWarningUnsupportedCarrierDict;
	NSMutableDictionary* _carrierServicesDict;
	NSMutableDictionary* _showServiceCodes;
	NSMutableDictionary* _carrierServicesAccountUrlDict;
	NSMutableDictionary* _carrierMmsInfoUrlDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                                    //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * carrierNameDict;                                     //@synthesize carrierNameDict=_carrierNameDict - In the implementation block
@property (retain) NSMutableDictionary * carrierBundleVersionDict;                            //@synthesize carrierBundleVersionDict=_carrierBundleVersionDict - In the implementation block
@property (retain) NSMutableDictionary * volteCustomerCarePhoneNumberDict;                    //@synthesize volteCustomerCarePhoneNumberDict=_volteCustomerCarePhoneNumberDict - In the implementation block
@property (retain) NSMutableDictionary * volteCustomerCareWebsiteDict;                        //@synthesize volteCustomerCareWebsiteDict=_volteCustomerCareWebsiteDict - In the implementation block
@property (retain) NSMutableDictionary * showVolteWarningUnsupportedCarrierDict;              //@synthesize showVolteWarningUnsupportedCarrierDict=_showVolteWarningUnsupportedCarrierDict - In the implementation block
@property (retain) NSMutableDictionary * show5GWarningUnsupportedCarrierDict;                 //@synthesize show5GWarningUnsupportedCarrierDict=_show5GWarningUnsupportedCarrierDict - In the implementation block
@property (retain) NSMutableDictionary * carrierServicesDict;                                 //@synthesize carrierServicesDict=_carrierServicesDict - In the implementation block
@property (retain) NSMutableDictionary * showServiceCodes;                                    //@synthesize showServiceCodes=_showServiceCodes - In the implementation block
@property (retain) NSMutableDictionary * carrierServicesAccountUrlDict;                       //@synthesize carrierServicesAccountUrlDict=_carrierServicesAccountUrlDict - In the implementation block
@property (retain) NSMutableDictionary * carrierMmsInfoUrlDict;                               //@synthesize carrierMmsInfoUrlDict=_carrierMmsInfoUrlDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)carrierBundleChange:(id)arg1 ;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(id)init;
-(void)willEnterForeground;
-(void)_clearCache;
-(id)carrierServicesAccountUrl:(id)arg1 ;
-(id)carrierServicesAccountTitle:(id)arg1 ;
-(id)mmsInfoUrl:(id)arg1 ;
-(id)mmsInfoTitle:(id)arg1 ;
-(id)carrierServices:(id)arg1 ;
-(BOOL)showServiceCodes:(id)arg1 ;
-(id)carrierBundleValue:(id)arg1 context:(id)arg2 ;
-(id)activeDataCarrierName;
-(id)carrierName:(id)arg1 ;
-(BOOL)show5GWarningUnsupportedCarrier:(id)arg1 ;
-(id)fetchCarrierBundleValue:(id)arg1 context:(id)arg2 ;
-(id)fetchCarrierBundleValueAsString:(id)arg1 ;
-(NSMutableDictionary *)carrierNameDict;
-(void)fetchCarrierName;
-(NSMutableDictionary *)carrierBundleVersionDict;
-(void)fetchCarrierBundleVersion;
-(NSMutableDictionary *)volteCustomerCarePhoneNumberDict;
-(void)fetchVolteCustomerCarePhoneNumber;
-(NSMutableDictionary *)volteCustomerCareWebsiteDict;
-(void)fetchVolteCustomerCareWebsite;
-(id)fetchCarrierBundleValue:(id)arg1 ;
-(NSMutableDictionary *)showVolteWarningUnsupportedCarrierDict;
-(void)fetchShowVolteWarningUnsupportedCarrier;
-(NSMutableDictionary *)show5GWarningUnsupportedCarrierDict;
-(void)fetchShow5GWarningUnsupportedCarrier;
-(NSMutableDictionary *)carrierServicesDict;
-(void)fetchCarrierServices;
-(NSMutableDictionary *)showServiceCodes;
-(void)fetchShowServiceCodes;
-(NSMutableDictionary *)carrierServicesAccountUrlDict;
-(void)fetchCarrierServicesAccountUrl;
-(NSMutableDictionary *)carrierMmsInfoUrlDict;
-(void)fetchCarrierMmsInfoUrl;
-(id)carrierBundleVersion:(id)arg1 ;
-(id)volteCustomerCarePhoneNumber:(id)arg1 ;
-(id)volteCustomerCareWebsite:(id)arg1 ;
-(BOOL)showVolteWarningUnsupportedCarrier:(id)arg1 ;
-(void)setCarrierNameDict:(NSMutableDictionary *)arg1 ;
-(void)setCarrierBundleVersionDict:(NSMutableDictionary *)arg1 ;
-(void)setVolteCustomerCarePhoneNumberDict:(NSMutableDictionary *)arg1 ;
-(void)setVolteCustomerCareWebsiteDict:(NSMutableDictionary *)arg1 ;
-(void)setShowVolteWarningUnsupportedCarrierDict:(NSMutableDictionary *)arg1 ;
-(void)setShow5GWarningUnsupportedCarrierDict:(NSMutableDictionary *)arg1 ;
-(void)setCarrierServicesDict:(NSMutableDictionary *)arg1 ;
-(void)setShowServiceCodes:(NSMutableDictionary *)arg1 ;
-(void)setCarrierServicesAccountUrlDict:(NSMutableDictionary *)arg1 ;
-(void)setCarrierMmsInfoUrlDict:(NSMutableDictionary *)arg1 ;
@end

