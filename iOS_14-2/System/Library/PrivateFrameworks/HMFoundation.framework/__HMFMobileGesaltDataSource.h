/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSource.h>
#import <HMFoundation/HMFSystemInfoMarketingInformationDataSource.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource.h>
#import <HMFoundation/HMFSystemInfoSoftwareVersionDataSource.h>
#import <HMFoundation/HMFSystemInfoWiFiDataSource.h>
#import <HMFoundation/HMFSystemInfoBluetoothLEDataSource.h>

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;
@class NSString, HMFMACAddress, HMFSoftwareVersion, NSObject;

@interface __HMFMobileGesaltDataSource : HMFObject <HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource> {

	os_unfair_lock_s _lock;
	BOOL _supportsBLE;
	id<HMFSystemInfoNameDataSourceDelegate> _delegate;
	NSString* _name;
	NSString* _modelIdentifier;
	NSString* _model;
	NSString* _regionInfo;
	NSString* _serialNumber;
	long long _productPlatform;
	long long _productClass;
	long long _productVariant;
	HMFSoftwareVersion* _softwareVersion;
	HMFMACAddress* _WiFiInterfaceMACAddress;
	NSObject*<OS_dispatch_queue> _queue;
	MGNotificationTokenStructRef _notificationToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (readonly) MGNotificationTokenStructRef notificationToken;                   //@synthesize notificationToken=_notificationToken - In the implementation block
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionInfo;                             //@synthesize regionInfo=_regionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) long long productPlatform;                              //@synthesize productPlatform=_productPlatform - In the implementation block
@property (nonatomic,readonly) long long productClass;                                 //@synthesize productClass=_productClass - In the implementation block
@property (nonatomic,readonly) long long productVariant;                               //@synthesize productVariant=_productVariant - In the implementation block
@property (nonatomic,copy,readonly) NSString * modelIdentifier;                        //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy,readonly) HMFMACAddress * WiFiInterfaceMACAddress;                     //@synthesize WiFiInterfaceMACAddress=_WiFiInterfaceMACAddress - In the implementation block
@property (readonly) BOOL supportsBLE;                                                 //@synthesize supportsBLE=_supportsBLE - In the implementation block
-(NSString *)serialNumber;
-(NSString *)model;
-(NSString *)regionInfo;
-(HMFMACAddress *)WiFiInterfaceMACAddress;
-(id)init;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(long long)productClass;
-(HMFSoftwareVersion *)softwareVersion;
-(NSString *)name;
-(void)setDelegate:(id<HMFSystemInfoNameDataSourceDelegate>)arg1 ;
-(long long)productVariant;
-(BOOL)supportsBLE;
-(NSString *)modelIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(MGNotificationTokenStructRef)notificationToken;
-(void)dealloc;
-(long long)productPlatform;
@end

