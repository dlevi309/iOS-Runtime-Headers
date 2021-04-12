/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

