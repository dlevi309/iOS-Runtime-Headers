/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryOOBBTPairing.framework/AccessoryOOBBTPairing
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <AccessoryOOBBTPairing/AccessoryOOBBTPairing-Structs.h>
@class ACCiAP2ShimAccessory, NSString, NSData, NSObject;

@interface ACCOOBBTPairingAccessory : NSObject {

	BOOL _carPlaySupported;
	BOOL _oobPairing2Supported;
	BOOL _isBTReady;
	ACCiAP2ShimAccessory* _iap2ShimAccessory;
	NSString* _displayName;
	NSData* _certData;
	NSData* _certSerial;
	NSString* _currentOOBBTPairingUID;
	NSData* _currentRemoteMACAddress;
	BTAccessoryManagerImplRef _BTAccessoryManager;
	NSObject*<OS_dispatch_queue> _BTSessionQueue;
	BTSessionImplRef _BTSession;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_semaphore> _setup_complete_semaphore;
	BTDeviceImplRef _currentRemoteBTDevice;

}

@property (assign) BTAccessoryManagerImplRef BTAccessoryManager;                           //@synthesize BTAccessoryManager=_BTAccessoryManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> BTSessionQueue;                            //@synthesize BTSessionQueue=_BTSessionQueue - In the implementation block
@property (assign) BTSessionImplRef BTSession;                                             //@synthesize BTSession=_BTSession - In the implementation block
@property (assign) BOOL isBTReady;                                                         //@synthesize isBTReady=_isBTReady - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                           //@synthesize processingQueue=_processingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> setup_complete_semaphore;              //@synthesize setup_complete_semaphore=_setup_complete_semaphore - In the implementation block
@property (assign) BTDeviceImplRef currentRemoteBTDevice;                                  //@synthesize currentRemoteBTDevice=_currentRemoteBTDevice - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimAccessory * iap2ShimAccessory;                     //@synthesize iap2ShimAccessory=_iap2ShimAccessory - In the implementation block
@property (retain) NSString * displayName;                                                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSData * certData;                                                      //@synthesize certData=_certData - In the implementation block
@property (retain) NSData * certSerial;                                                    //@synthesize certSerial=_certSerial - In the implementation block
@property (assign) BOOL carPlaySupported;                                                  //@synthesize carPlaySupported=_carPlaySupported - In the implementation block
@property (assign) BOOL oobPairing2Supported;                                              //@synthesize oobPairing2Supported=_oobPairing2Supported - In the implementation block
@property (nonatomic,retain) NSString * currentOOBBTPairingUID;                            //@synthesize currentOOBBTPairingUID=_currentOOBBTPairingUID - In the implementation block
@property (nonatomic,retain) NSData * currentRemoteMACAddress;                             //@synthesize currentRemoteMACAddress=_currentRemoteMACAddress - In the implementation block
-(id)init;
-(NSData *)certData;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setCarPlaySupported:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setCertData:(NSData *)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(ACCiAP2ShimAccessory *)iap2ShimAccessory;
-(void)setIap2ShimAccessory:(ACCiAP2ShimAccessory *)arg1 ;
-(NSData *)certSerial;
-(void)setCertSerial:(NSData *)arg1 ;
-(BOOL)carPlaySupported;
-(BOOL)oobPairing2Supported;
-(void)setOobPairing2Supported:(BOOL)arg1 ;
-(NSString *)currentOOBBTPairingUID;
-(void)setCurrentOOBBTPairingUID:(NSString *)arg1 ;
-(NSData *)currentRemoteMACAddress;
-(void)setCurrentRemoteMACAddress:(NSData *)arg1 ;
-(BTAccessoryManagerImplRef)BTAccessoryManager;
-(void)setBTAccessoryManager:(BTAccessoryManagerImplRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)BTSessionQueue;
-(void)setBTSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BTSessionImplRef)BTSession;
-(void)setBTSession:(BTSessionImplRef)arg1 ;
-(BOOL)isBTReady;
-(void)setIsBTReady:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)setup_complete_semaphore;
-(void)setSetup_complete_semaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BTDeviceImplRef)currentRemoteBTDevice;
-(void)setCurrentRemoteBTDevice:(BTDeviceImplRef)arg1 ;
@end

