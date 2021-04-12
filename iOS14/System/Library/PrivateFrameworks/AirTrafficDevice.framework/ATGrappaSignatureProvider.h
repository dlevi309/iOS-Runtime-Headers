/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <ATFoundation/ATSignatureProvider.h>

@class ATGrappaSession, ATDeviceSettings;

@interface ATGrappaSignatureProvider : ATSignatureProvider {

	ATGrappaSession* _grappaSession;
	ATDeviceSettings* _settings;

}
-(id)initWithGrappaSession:(id)arg1 ;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
@end

