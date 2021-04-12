/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {

	AVAssetCustomURLBridgeForNSURLProtocol* _bridge;
	CFURLConnectionRef _connection;
	CFErrorRef _error;

}

@property (assign,nonatomic,__weak) AVAssetCustomURLBridgeForNSURLProtocol * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) CFURLConnectionRef connection; 
-(void)setBridge:(AVAssetCustomURLBridgeForNSURLProtocol *)arg1 ;
-(AVAssetCustomURLBridgeForNSURLProtocol *)bridge;
-(CFURLConnectionRef)connection;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
-(void)dealloc;
@end

