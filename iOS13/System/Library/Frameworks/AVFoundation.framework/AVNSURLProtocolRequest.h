/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {

	AVAssetCustomURLBridgeForNSURLProtocol* _bridge;
	CFURLConnectionRef _connection;
	CFErrorRef _error;

}

@property (assign,nonatomic,__weak) AVAssetCustomURLBridgeForNSURLProtocol * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) CFURLConnectionRef connection; 
-(void)dealloc;
-(CFURLConnectionRef)connection;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
-(AVAssetCustomURLBridgeForNSURLProtocol *)bridge;
-(void)setBridge:(AVAssetCustomURLBridgeForNSURLProtocol *)arg1 ;
@end

