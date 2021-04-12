/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface TVRMSFairPlaySession : NSObject {

	FPSAPContextOpaque_Ref _sessionToken;
	FairPlayHWInfo_ _hardwareInfo;
	BOOL _handshakeComplete;

}

@property (getter=isHandshakeComplete,nonatomic,readonly) BOOL handshakeComplete;              //@synthesize handshakeComplete=_handshakeComplete - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)_hexStringForData:(id)arg1 ;
-(id)handshakeIterationWithData:(id)arg1 ;
-(id)handshakeData;
-(id)headerForURL:(id)arg1 ;
-(BOOL)isHandshakeComplete;
@end

