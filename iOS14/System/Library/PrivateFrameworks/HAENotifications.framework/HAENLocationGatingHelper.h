/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@protocol OS_dispatch_queue;
#import <HAENotifications/HAENotifications-Structs.h>
@class HAENGeoLocation, NSObject, NSDictionary, NSNumber;

@interface HAENLocationGatingHelper : NSObject {

	HAENGeoLocation* _geoLocation;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSDictionary* _regionBehavior;
	BOOL _EUVolumeLimitFlagOn;
	NSNumber* _productTypeOverride;
	SCD_Struct_HA7 _stats;

}
+(id)sharedInstance;
-(id)init;
-(void)update;
-(BOOL)_isIPod;
-(void)dealloc;
-(SCD_Struct_HA1)getStats;
-(void)deviceDataDispositionDidChange;
-(void)_contryConfigurationDidChange:(id)arg1 ;
-(void)_loadRegionPlistFile;
-(void)_updateImpl;
-(void)_logLocationGatingFlags;
-(BOOL)_shouldUpdateLocation:(id)arg1 ;
-(void)_updateLocationGatingFlags;
-(void)_updateSampleTransient:(id)arg1 ;
-(id)_readDeviceDisposition;
-(BOOL)_isHAENFeatureMandatory:(id)arg1 dataDisposition:(id)arg2 ;
-(void)_setFeatureMandatoryFlag:(id)arg1 ;
-(BOOL)_validCountryCodeSource:(unsigned)arg1 ;
-(BOOL)_regionAndDeviceMandatesFeature:(id)arg1 ;
-(BOOL)_validDataDisposition:(id)arg1 ;
-(int)_getMGProductType;
-(void)reloadProductTypeOverride;
@end

