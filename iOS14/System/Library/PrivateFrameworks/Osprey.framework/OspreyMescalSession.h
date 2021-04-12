/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


#import <Osprey/Osprey-Structs.h>
@interface OspreyMescalSession : NSObject {

	FPSAPContextOpaque_Ref _fairplayContext;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned long long _state;

}
-(id)init;
-(void)invalidate;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)_exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)handshakeRequestWithCertificateData:(id)arg1 error:(id*)arg2 ;
-(BOOL)completeWithHandshakeResponse:(id)arg1 error:(id*)arg2 ;
@end

