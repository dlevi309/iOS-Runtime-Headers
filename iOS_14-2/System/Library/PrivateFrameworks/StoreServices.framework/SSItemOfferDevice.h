/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSItemOfferDeviceError, NSString;

@interface SSItemOfferDevice : NSObject {

	long long _deviceIdentifier;
	SSItemOfferDeviceError* _incompatibleDeviceError;
	SSItemOfferDeviceError* _incompatibleSystemError;
	NSString* _minimumProductVersion;

}

@property (nonatomic,readonly) long long deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * minimumProductVersion;                              //@synthesize minimumProductVersion=_minimumProductVersion - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleDeviceError;              //@synthesize incompatibleDeviceError=_incompatibleDeviceError - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleSystemError;              //@synthesize incompatibleSystemError=_incompatibleSystemError - In the implementation block
-(long long)deviceIdentifier;
-(id)initWithOfferDeviceDicitionary:(id)arg1 ;
-(id)initWithDeviceIdentifier:(long long)arg1 ;
-(SSItemOfferDeviceError *)incompatibleDeviceError;
-(SSItemOfferDeviceError *)incompatibleSystemError;
-(NSString *)minimumProductVersion;
-(id)init;
-(void)dealloc;
@end

