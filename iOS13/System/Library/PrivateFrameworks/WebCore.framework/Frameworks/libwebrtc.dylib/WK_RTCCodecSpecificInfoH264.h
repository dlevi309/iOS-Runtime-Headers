/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCCodecSpecificInfo.h>

@class NSString;

@interface WK_RTCCodecSpecificInfoH264 : NSObject <RTCCodecSpecificInfo> {

	unsigned long long _packetizationMode;

}

@property (assign,nonatomic) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)packetizationMode;
-(CodecSpecificInfo*)nativeCodecSpecificInfo;
-(void)setPacketizationMode:(unsigned long long)arg1 ;
@end

