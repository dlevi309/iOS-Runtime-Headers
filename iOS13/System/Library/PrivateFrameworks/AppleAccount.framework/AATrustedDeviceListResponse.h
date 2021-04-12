/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSNumber *)defaultNumberOfDevicesToShow;
@end

