/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSNumber;

@interface AATrustedDeviceListResponse : AAResponse {

	NSArray* _devices;
	NSNumber* _defaultNumberOfDevicesToShow;

}

@property (nonatomic,readonly) NSArray * devices;                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSNumber * defaultNumberOfDevicesToShow;              //@synthesize defaultNumberOfDevicesToShow=_defaultNumberOfDevicesToShow - In the implementation block
-(NSArray *)devices;
-(NSNumber *)defaultNumberOfDevicesToShow;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

