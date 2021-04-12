/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@protocol DCCryptoProxy;
@class DCContext;

@interface DCDDeviceMetadata : NSObject {

	id<DCCryptoProxy> _cryptoProxy;
	DCContext* _context;

}
-(id)initWithContext:(id)arg1 cryptoProxy:(id)arg2 ;
-(void)generateEncryptedBlobWithCompletion:(/*^block*/id)arg1 ;
@end

