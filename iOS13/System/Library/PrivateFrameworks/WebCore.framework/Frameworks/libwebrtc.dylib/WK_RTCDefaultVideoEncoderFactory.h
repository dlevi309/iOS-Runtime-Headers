/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libobjc.A.dylib/RTCVideoEncoderFactory.h>

@class WK_RTCVideoCodecInfo, NSString;

@interface WK_RTCDefaultVideoEncoderFactory : NSObject <RTCVideoEncoderFactory> {

	WK_RTCVideoCodecInfo* preferredCodec;

}

@property (nonatomic,retain) WK_RTCVideoCodecInfo * preferredCodec; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedCodecs;
-(WK_RTCVideoCodecInfo *)preferredCodec;
-(void)setPreferredCodec:(WK_RTCVideoCodecInfo *)arg1 ;
-(id)supportedCodecs;
-(id)createEncoder:(id)arg1 ;
@end

