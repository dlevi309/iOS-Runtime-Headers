/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface TVRMSFairPlaySession : NSObject {

	FPSAPContextOpaque_Ref _sessionToken;
	FairPlayHWInfo_ _hardwareInfo;
	BOOL _handshakeComplete;

}

@property (getter=isHandshakeComplete,nonatomic,readonly) BOOL handshakeComplete;              //@synthesize handshakeComplete=_handshakeComplete - In the implementation block
-(void)invalidate;
-(void)dealloc;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)_hexStringForData:(id)arg1 ;
-(id)handshakeIterationWithData:(id)arg1 ;
-(id)handshakeData;
-(id)headerForURL:(id)arg1 ;
-(BOOL)isHandshakeComplete;
@end

