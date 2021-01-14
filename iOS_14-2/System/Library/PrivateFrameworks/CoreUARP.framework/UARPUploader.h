/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@protocol OS_os_log;
#import <CoreUARP/CoreUARP-Structs.h>
@class NSObject, UARPController;

@interface UARPUploader : NSObject {

	uarpControllerObj* _coreController;
	uarpControllerCallbacksObj* _coreCallbacks;
	uarpControllerAppleObj* _appleController;
	uarpPlatformOptionsObj _options;
	NSObject*<OS_os_log> _xpcLog;
	UARPController* _controller;

}

@property (__weak,readonly) UARPController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithController:(id)arg1 ;
-(UARPController *)controller;
-(unsigned)recvPersonalizationRequestForAccessory:(id)arg1 buffer:(AppleUARPPersonalizationRequired*)arg2 length:(unsigned)arg3 ;
-(unsigned)recvPersonalizationInfoResponseForAccessory:(id)arg1 buffer:(AppleUARPPersonalizationInfoResponse*)arg2 length:(unsigned)arg3 ;
-(BOOL)addAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAccessory:(id)arg1 error:(id*)arg2 ;
-(unsigned)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(BOOL)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(unsigned)requestBytesInRangeForAccessory:(id)arg1 asset:(id)arg2 bytes:(void*)arg3 length:(unsigned)arg4 offset:(unsigned)arg5 bytesCopied:(unsigned*)arg6 offsetUsed:(unsigned*)arg7 ;
-(unsigned)sendData:(id)arg1 bytes:(void*)arg2 length:(unsigned)arg3 ;
-(void)processingComplete:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3 ;
-(BOOL)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2 ;
-(void)queryFirmwareUpdateResultForAccessory:(id)arg1 ;
-(long long)queryProperty:(unsigned long long)arg1 forAccessory:(id)arg2 ;
-(void)updateInfo:(id)arg1 type:(unsigned)arg2 length:(unsigned)arg3 value:(char*)arg4 ;
-(void)applyStagedAssetStatus:(id)arg1 status:(unsigned short)arg2 ;
-(BOOL)pauseAssetTransfersForAccessory:(id)arg1 ;
-(BOOL)resumeAssetTransfersForAccessory:(id)arg1 ;
-(BOOL)cancelFirmwareStagingForAccessory:(id)arg1 asset:(id)arg2 ;
-(unsigned)recvVendorSpecificMessage:(unsigned short)arg1 forAccessory:(id)arg2 oui1:(unsigned char)arg3 oui2:(unsigned char)arg4 oui3:(unsigned char)arg5 buffer:(char*)arg6 length:(unsigned)arg7 ;
-(unsigned)personalizeAsset:(uarpControllerAssetObj*)arg1 forAccessory:(id)arg2 ;
@end

