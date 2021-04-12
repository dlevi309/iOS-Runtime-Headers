/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem {

	NSError* _cancelError;

}

@property (nonatomic,retain) NSError * cancelError;              //@synthesize cancelError=_cancelError - In the implementation block
+(id)checkCertificate;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(NSError *)cancelError;
-(void)runForPairingDriver:(id)arg1 ;
@end

